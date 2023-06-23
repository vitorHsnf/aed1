#include <stdio.h>
#include <stdlib.h>

struct dma
{
    int dia;
    int mes;
    int ano;
};

int calcula_dias(struct dma data1, struct dma data2)
{
    int total_dias = 0;

    if ((data1.ano == data2.ano && data1.mes > data2.mes) || 
    (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia > data2.dia)) 
    {
        struct dma aux = data1;
        data1 = data2;
        data2 = aux;
    }

    total_dias += (data2.ano - data1.ano) * 365;
    total_dias += (data2.mes - data1.mes) * 30;
    total_dias += data2.dia - data1.dia;

    return total_dias;

}