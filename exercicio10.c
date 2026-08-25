#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
     setlocale(LC_CTYPE, "");

     float veloc_inicial, angulo_lanc,rad,alcance;

     printf("Qual a velocidade incial (m/s): ");
     scanf("%f", &veloc_inicial);
     printf("Qual ângulo de lançamento em graus: ");
     scanf ("%f", &angulo_lanc);

     rad = (angulo_lanc *3.14)/180;
     alcance = pow(veloc_inicial,2)* sin(2 * rad)/ 9.8;
     printf("O alcance horizontal estimado é : %.2f ", alcance);
}
