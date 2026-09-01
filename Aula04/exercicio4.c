#include<stdio.h>
#include <math.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float peso,altura,imc;

    printf("Digite seu peso (em kg): ");
    scanf("%f",&peso);
    printf("Digite sua altura (em metros): ");
    scanf("%f",&altura);

    imc = peso / pow(altura,2);

    if (imc <20.0){
        printf("Abaixo do peso");
   }
    else if (imc <=24.9){
        printf("Peso normal");
    }
    else if (imc <30){
        printf("Sobrepeso");
    }
    else if (imc <40){
        printf("Obeso");
    }
    else{
        printf("Obeso mórbido");
    }
    return 0;
}
