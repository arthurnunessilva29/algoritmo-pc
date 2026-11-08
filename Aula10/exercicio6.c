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

int main() {

    int i = 0, consulta;
    char resp;
    Aluno alunos[3];

    for (i = 0; i < 3; i++) {
        printf("\nDigite o rgm do aluno: ");
        scanf("%d", &alunos[i].rgm);
        printf("Digite a primeira nota: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &alunos[i].nota2);
        calcularMedia(&alunos[i]);
    }

    while (1) {

    int encontrado = 0;

    printf("\nDigite o rgm para consulta: ");
    scanf("%d", &consulta);

    for (i = 0; i < 3; i++) {
        if (consulta == alunos[i].rgm) {
            printf("\nRGM: %d", alunos[i].rgm);
            printf("\nMédia do aluno: %.2f", alunos[i].media);

            encontrado = 1;
            break;
        }
    }
    if (encontrado == 0) {
        printf("\nRGM não encontrado!!\n");
    }

    printf("\nDeseja consultar outro aluno?(s/n) ");
        scanf(" %c", &resp);
        if (resp == 'n' || resp == 'N') {
            break;
        }
    }
}