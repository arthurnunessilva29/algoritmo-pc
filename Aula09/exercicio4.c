#include <stdio.h>

int main () {

    char linha[100], rgm[12];
    int contador = 0, aprovados = 0;
    float nota = 0, soma = 0, maior = 0, media = 0;

    FILE *arquivo = fopen("notas.txt", "r");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo D:");
        return 1;
    }

    while (fscanf(arquivo, "%11s %f", rgm, &nota) == 2) {
        soma += nota;
        if (maior < nota) {
            maior = nota;
        }
        if (nota >= 6) {
            aprovados++;
        }
        contador++;
    }
    media = soma/contador;

    printf("Estudantes: %d\n", contador);
    printf("Média da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    fclose(arquivo);
}