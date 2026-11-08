#include <stdio.h>

void trocar(int *a, int *b) {
    int auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main () {

    int *a, *b;
    
    printf("\nDigite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\nAntes: a=%d b=%d", a, b);
    trocar(&a, &b);
    printf("\nDepois: a=%d b=%d\n", a, b);

}