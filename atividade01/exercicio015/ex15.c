/* 
15 - Escreva um programa que receba dois structs do tipo dma,
cada um representando uma data válida, e calcule o número  de 
dias que decorreram entre as duas datas.
struct dma
{
    int dia;
    int mes;
    int ano;
};
*/

#include <stdio.h>
#include "processamento.c"

int main()
{
    int decorrer_dias = 0;
    struct dma data1, data2;
    
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    // if (validar_data(data1.dia, data1.mes, data1. ano) == 1)
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    // if (validar_data(data2.dia, data2.mes, data2.ano) == 1)
    printf("Data 1: %d/%d/%d \n", data1.dia, data1.mes, data1.ano);
    printf("Data 2: %d/%d/%d \n", data2.dia, data2.mes, data2.ano);

    decorrer_dias = calcula_dias(data1, data2);
    printf("Dias decorridos: %d \n", decorrer_dias);
}