#include <stdio.h>

int main () {

    int opc;
    float consumo;
    char meses[20];

    do {
        
        printf("\n1 - Cadastrar consumo\n");
        printf("2 - Exibir relatório\n");
        printf("3 - Sair\n");
        printf("Selecione uma opção: ");
        scanf("%d", &opc);

        if (opc < 1 || opc > 3) {
            printf("\nInsira um valor válido!\n");
        } else if (opc == 1) {
            FILE *arquivo = fopen("energia.txt", "a");

            if (arquivo == NULL) {
                printf("Não foi possível abrir o arquivo D:\n");
                return 1;
            }

            printf("\nDigite o mês: ");
            scanf("%19s", meses);
            printf("Digite o consumo (kWh): ");
            scanf("%f", &consumo);

            fprintf(arquivo, "Mês: %s - Consumo: %.2f\n", meses, consumo);
            fclose(arquivo);
        } else if (opc == 2) {

            FILE *arquivo = fopen("energia.txt", "r");

            

            fclose(arquivo);

        } else if (opc ==3) {
            printf("\nSaindo..\n");
        }

    } while (opc != 3);
}