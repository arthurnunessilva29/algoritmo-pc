#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float x1,y1,x2,y2,distancia_euclid;

    printf("\nDigite a coordenada x do 1º ponto: ");
    scanf("%f", &x1);
    printf("\nDigite a coordenada do y do ponto 1º ponto: ");
    scanf("%f", &y1);
    printf("\nDigite a coordenada do x do ponto 2º ponto: ");
    scanf("%f", &x2);
    printf("Digite a coordenada do y do ponto 2º ponto: ");
    scanf("%f", &y2);

    distancia_euclid = sqrt (pow((x2 - x1),2) + pow((y2 - y1),2));
    printf("\nA distância entre os pontos é : %.2f", distancia_euclid);

    return 0;
}
