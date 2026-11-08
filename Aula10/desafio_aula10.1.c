#include <stdio.h>
#define LABS 4
#define DIAS 7

float calcular_total(float consumo[LABS][DIAS]) {
    float total = 0;
    int i=0, j=0;

    for(i = 0 ; i < LABS ; i++) {
        for(j = 0 ; j < DIAS ; j++) {
            total += consumo[i][j];
        }
    }
    return total;
} 

void calcular_media(float consumo[LABS][DIAS], float medias[LABS]) {
    int i=0, j=0;
    float soma;

    for(i = 0 ; i < LABS ; i++) {
        soma = 0;
        for(j = 0 ; j < DIAS ; j++) {
            soma += consumo[i][j];
        }
        medias[i] = soma/DIAS;
    }
}

void dia_maior_consumo(float consumo[LABS][DIAS], float *maior_dia, int *dia) {
    int i=0, j=0;
    float soma;
    *maior_dia = 0;

    for(j = 0 ; j < DIAS ; j++) {
        soma = 0;
        for(i = 0 ; i < LABS ; i++) {
            soma += consumo[i][j];
        }

        if (*maior_dia < soma) {
            *maior_dia = soma;
            *dia = j;
        }
    }
}

void lab_maior_consumo(float consumo[LABS][DIAS], float *maior_lab, int *lab) {
    int i=0, j=0;
    float soma;
    *maior_lab = 0;

    for(i = 0 ; i < LABS ; i++) {
        soma = 0;
        for(j = 0 ; j < DIAS ; j++) {
            soma += consumo[i][j];
        }
        if (*maior_lab < soma) {
            *maior_lab = soma;
            *lab = i;
        }
    }
}

void contar_acima_limite(float consumo[LABS][DIAS], int *contador) {
    int i=0, j=0;
    *contador = 0;
    
    for(i = 0 ; i < LABS ; i++) {
        for(j = 0 ; j < DIAS ; j++) {
            if (consumo[i][j] > 100) {
                (*contador)++;
            }
        }
    }
}

int main() {

    float maior_dia, maior_lab;
    int dia, lab, contador;
    const char *dias[] = {"seg", "ter", "qua", "qui", "sex", "sab", "dom" };
    const char *laboratorios[] = {"Lab A", "Lab B", "Lab C", "Lab D"};
    float medias[LABS];
    float consumo[LABS][DIAS] = {
    //Lab A:
    80, 90, 95, 110, 120, 100, 85,
    //Lab B:
    75, 85, 90, 105, 115, 95, 80,
    //Lab C:
    100, 110, 120, 130, 125, 115, 105, 
    //Lab D:
    70, 80, 85, 90, 100, 95, 75
    };

    calcular_media(consumo, medias);
    dia_maior_consumo(consumo, &maior_dia, &dia);
    lab_maior_consumo(consumo, &maior_lab, &lab);
    contar_acima_limite(consumo, &contador);

    printf("\n===== RELATÓRIO DE CONSUMO ====\n");

    printf("\nConsumo total geral: %.2f kWh\n", calcular_total(consumo));

    printf("\nMédia do Lab A: %.2f kWh", medias[0]);
    printf("\nMédia do Lab B: %.2f kWh", medias[1]);
    printf("\nMédia do Lab C: %.2f kWh", medias[2]);
    printf("\nMédia do Lab D: %.2f kWh\n", medias[3]);

    printf("\nDia com maior consumo total:\n%s - %.2f kWh\n", dias[dia], maior_dia);

    printf("\nLaboratório com maior consumo semanal:\n%s - %.2f kWh\n", laboratorios[lab], maior_lab);

    printf("\nRegistros acima de 100 kWh: %d\n", contador);
}
