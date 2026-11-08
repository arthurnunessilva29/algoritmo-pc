#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    int qnt_manha, qnt_tarde,qnt_total;

    printf("Quantidade recebida pela manha? ");
    scanf("%d",&qnt_manha);

    printf("Quantidade recebida pela tarde? ");
    scanf("%d",&qnt_tarde);

    qnt_total = qnt_manha + qnt_tarde;
    printf("Total de produtos recebidos no dia: %d ", qnt_total);
    return 0;
}
