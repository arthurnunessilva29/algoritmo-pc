#include <stdio.h>
#include <locale.h>

int main()
{
     setlocale(LC_CTYPE,"");

     int num1, num2,soma,subtracao,multiplic;

     printf("Digite o primeiro numero: ");
     scanf("%d", &num1);
     printf("Digite o segundo numero: ");
     scanf("%d", &num2);

     soma = num1 + num2;
     printf("\nSoma: %d ", soma);

     subtracao = num1 - num2;
     printf("\nSubtração: %d ",subtracao);

     multiplic = num1 * num2;
     printf("\nMultiplicação: %d ",multiplic);

}
