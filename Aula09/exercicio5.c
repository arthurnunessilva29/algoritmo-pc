#include <stdio.h>

int main () {

    int id, contador = 0;
    float valor, soma = 0, maior = 0;

    FILE *arquivo = fopen("vendas.txt", "r");

    while(fscanf(arquivo,"%d %f", &id, &valor) == 2) {
        soma += valor;
        if (maior < valor) {
            maior = valor;
        }
        contador++;
    }

    printf("Quantidade de vendas: %d\n", contador);
    printf("Total vendido: %.2f\n", soma);
    printf("Maior venda: %.2f\n", maior);

    fclose(arquivo);
}