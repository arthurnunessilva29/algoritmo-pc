#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    float peso,altura,imc;

    printf("Qual é o peso da pessoa em kg? ");
    scanf("%f", &peso);
    printf("Qual é a altura da pessoa em metros? ");
    scanf("%f", &altura);

    imc = (float)peso/pow(altura,2);
    printf("\nO Índice de Massa Corporal é %.2f kg/m²", imc);
}
