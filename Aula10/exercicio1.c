#include <stdio.h>

float calcularFrete(float peso) {
    return peso*4.5;
}

void exibirRelatorio(float peso) {
    printf("-------------------------");
    printf("\nValor do frete: R$ %.2f\n", calcularFrete(peso));
    printf("-------------------------");
}

int main () {

    float peso;
    char resp;

    while(1) {
        
        printf("\nDigite o peso (kg): ");
        scanf("%f", &peso);

        exibirRelatorio(peso);
        printf("\nDeseja calcular outro frete (s/n)? ");
        scanf(" %c", &resp);

        if (resp == 'n' || resp == 'N') {
            break;
        }

    }

}