#include<stdio.h>
#include<locale.h>
int main()
{
      setlocale(LC_CTYPE, "");

      float temp_gestacao;
      int qntd_semanas;
      printf("Qual a quantidade de semanas de gestação? ");
      scanf("%d", &qntd_semanas);
      temp_gestacao = (float) (qntd_semanas*7)/30;
      printf("Tempo de gestação aproximado: %.2f meses", temp_gestacao);
      return 0;

}
