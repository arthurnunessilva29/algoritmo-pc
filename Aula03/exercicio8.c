#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
       setlocale(LC_CTYPE, "");
       float  num1,num2,num3,media_pond;

       printf("Digite o primeira nota: ");
       scanf("%f", &num1);
       printf("Digite segunda nota : ");
       scanf("%f", &num2);
       printf("Digite a terceira nota: ");
       scanf("%f", &num3);

       media_pond = ((num1 * 1)+(num2 * 2)+(num3*4)) / (1+2+4);
       printf("A média ponderada é: %.2f",media_pond);
}
