#include <stdio.h>

int main () {

    int qt_registros, i=0;

    printf("Quantidade de registros: ");
    scanf("%d", &qt_registros);

    char dias[qt_registros][20];
    float consumo[qt_registros];

    for(i=0 ; i < qt_registros ; i++) {
        printf("Dia: ");
        scanf("%s", dias[i]);
        printf("Consumo: ");
        scanf("%f", &consumo[i]);
    }

    FILE *arquivo = fopen("consumo.txt", "a");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo D:\n");
        return 1;
    }
    
    for (i = 0 ; i < qt_registros ; i++) {
        fprintf(arquivo, "%s %.2f\n", dias[i], consumo[i]);
    }
    fclose(arquivo);
}