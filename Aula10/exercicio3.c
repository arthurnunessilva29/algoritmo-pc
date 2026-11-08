#include <stdio.h>

float calcularMedia(float nota1, float nota2, float media) {
    return (nota1+nota2)/2;
}

void exibirResultado(float media) {
    printf("\nMédia do aluno: %.2f", media);
    if (media >= 7) {
        printf("\nSituação: Aprovado");
    } else {
        printf("\nSituação: Reprovado");
    }
}

int main() {

    float nota1, nota2, media;
    char resp;

    while(1) {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        media = calcularMedia(nota1, nota2, media);
        exibirResultado(media);
        
        printf("\nDeseja digitar notas de outro aluno?(s/n) ");
        scanf(" %c", &resp);
        if (resp == 'n' || resp == 'N') {
            break;    
        }
    }
}