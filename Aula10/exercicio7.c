#include <stdio.h>

typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcularMedia(Aluno *alunos) {
    alunos->media = (alunos->nota1 + alunos->nota2) / 2;
}

void cadastrarAluno(Aluno *alunos, int i) {
    printf("\nDigite o rgm do aluno: ");
    scanf("%d", &alunos[i].rgm);
    printf("Digite a primeira nota: ");
    scanf("%f", &alunos[i].nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &alunos[i].nota2);
    calcularMedia(&alunos[i]);
}

void consultarAluno(Aluno * alunos, int qt_alunos) {
    int encontrado = 0, consulta, i=0;

    printf("\nDigite o rgm para consulta: ");
    scanf("%d", &consulta);

    for (i = 0; i < qt_alunos; i++) {
        if (consulta == alunos[i].rgm) {
            printf("\nRGM: %d", alunos[i].rgm);
            printf("\nMédia do aluno: %.2f\n", alunos[i].media);

            encontrado = 1;
            break;
        }
    }
    if (encontrado == 0) {
        printf("\nRGM não encontrado!!\n");
    }
}

void listarAlunos(Aluno *alunos, int qt_alunos) {
    int i=0;
    for (i = 0 ; i < qt_alunos ; i++) {
        printf("\nRGM do %dº aluno: %d", (i+1), alunos[i].rgm);
    }
    printf("\n");
}

int main() {

    Aluno alunos[10];
    int qt_alunos = 0;

    while (1) {

        int opc;

        printf("\n===== Sistema Acadêmico =====\n");
        printf("\n1 - Cadastrar aluno");
        printf("\n2 - Consultar aluno por RGM");
        printf("\n3 - Listar alunos");
        printf("\n4 - Sair\n");
        printf("\nEscreva uma opção: ");
        scanf("%d", &opc);

        switch(opc){
            case 1:
            if (qt_alunos < 10) {
                cadastrarAluno(alunos, qt_alunos);
                qt_alunos++;
                printf("Aluno cadasstrado com sucesso!\n");
            } else {
                printf("Limite de alunos atingido!!\n");
            }
                break;
            case 2:
                consultarAluno(alunos, qt_alunos);
                break;
            case 3:
                if (qt_alunos < 1) {
                    printf("Ainda não há alunos cadastrados!!");
                } else {
                    listarAlunos(alunos, qt_alunos);
                }
                break;
            case 4:
                return 0;
            default:
                printf("\nDigite um valor válido!!\n");
        }
    }
}