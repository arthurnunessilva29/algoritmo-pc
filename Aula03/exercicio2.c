#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");

    int hora,minuto,min_trans;

    printf("Hora? ");
    scanf("%d", &hora);

    printf("Minuto? ");
    scanf("%d", &minuto);

    min_trans = hora * 60 + minuto;
    printf(" Já se passaram %d minutos desde o início do dia.", min_trans);
}
