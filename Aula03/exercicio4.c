#include <stdio.h>
#include <locale.h>

int main()
{
     setlocale(LC_CTYPE,"");

     int potencia, hora_dia;
     float consumo_mensal;

     printf("Potência do equipamento (W)? ");
     scanf("%d", &potencia);
     printf("Horas de uso por dia? ");
     scanf("%d", &hora_dia);

     consumo_mensal = (float)(potencia*hora_dia*30)/1000;
     printf("Consumo mensal : %.2f kwh", consumo_mensal);

     return 0;
}
