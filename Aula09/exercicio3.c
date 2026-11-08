#include <stdio.h>

int main () {
    char linhas[10];

    FILE *arquivo = fopen("tabuada.txt", "r");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo D:");
        return 1;
    }

    while (fgets(linhas, sizeof(linhas), arquivo) != NULL) {
        printf("%s", linhas);
    }
    fclose(arquivo);
}