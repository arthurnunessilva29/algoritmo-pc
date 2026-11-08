#include <stdio.h>

int main () {

    int i = 0, num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    FILE *arquivo = fopen("tabuada.txt", "w");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo D:\n");
        return 1;
    }
    for ( i = 0; i < 11; i++) {
        fprintf(arquivo, "%d * %d = %d\n", num, i, (num*i));
    }
    fclose(arquivo);
}