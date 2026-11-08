#include <stdio.h>

typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcularMedia(Aluno *aluno) {
    aluno->media = (aluno->nota1 + aluno->nota2) / 2;
}

int main () {

    Aluno aluno;

    printf("\nDigite o rgm do aluno: ");
    scanf("%d", &aluno.rgm);
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);
    calcularMedia(&aluno);

    printf("\nRGM: %d", aluno.rgm);
    printf("\nMédia: %.2f\n", aluno.media);
}