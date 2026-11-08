#include <stdio.h>

float calcularArea(float largura, float comprimento) {
    return largura*comprimento;
}

int main() {

    float largura, comprimento;
    char resp;

    while(1) {
        printf("Digite a largura (m): ");
        scanf("%f", &largura);
        printf("Digite o comprimento (m): ");
        scanf("%f", &comprimento);

        printf("\nÁrea: %.2f m²", calcularArea(largura, comprimento));

        printf("\nDeseja calcular outra área?(s/n) ");
        scanf(" %c", &resp);
        if (resp == 'n' || resp == 'N') {
            break;    
        }
    }
}