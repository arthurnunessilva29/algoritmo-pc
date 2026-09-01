#include<stdio.h>
#include <math.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float nota1,nota2,media_aritmet;
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    media_aritmet = (nota1 + nota2)/ 2;

    if(media_aritmet >= 6.0){
        printf("Parabéns! Você foi aprovado com média %.2f", media_aritmet);
    }else{
        printf("Reprovado");
    }
    return 0;
}
