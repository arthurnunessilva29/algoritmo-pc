#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE,"");

    float largura,comprimento,valor_caixa,area_total,custo_total,qnt_caixa;
    printf("Qual È a largura da ·rea (em metros)?  ");
    scanf("%f", &largura);
    printf("Qual È o comprimento da ·rea (em metros) ");
    scanf("%f", &comprimento);
    printf("Qual o valor de cada caixa? ");
    scanf("%f", &valor_caixa);

    area_total = largura * comprimento;
    qnt_caixa = area_total/ 2.5;
    custo_total = ceil(qnt_caixa) * valor_caixa;

    printf("\n¡rea total a ser revestida: %.2f m≤", area_total);
    printf("\nQuantidade caixas necess·rias: %.1f",ceil (qnt_caixa));
    printf("\nCusto total da compra: R$ %.2f",custo_total);

    return 0;



}
