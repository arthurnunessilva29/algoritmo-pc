#include<stdio.h>
#include<locale.h>
int main()
{
      setlocale(LC_CTYPE, "");

      float raio,perimetro,pi= 3.14;
      printf("Qual a medida do raio (em cm): ");
      scanf("%f",&raio);
      perimetro = 2*pi*raio;
      printf("O perímetro da circunferência é: %.2f", perimetro);
      return 0;

}
