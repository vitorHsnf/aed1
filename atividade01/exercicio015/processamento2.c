#include <stdio.h>
#include <stdlib.h>

struct dma
{
    int dia;
    int mes;
    int ano;
};

// Função que calcula se o ano é bissexto, retorna 1 (True) ou 0 (False)
int eh_ano_bissexto(int ano)
{
    if ( (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        return 1;
    else
        return 0;
}

int calcula_mes_dias2(int mes_data1, int dia_data1, int mes_data2, int dia_data2)
{
    int meses_dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, aux = 0;
    int total_mes = 0;

    if (mes_data1 > mes_data2)
    {
        aux = mes_data1;
        mes_data1 = mes_data2;
        mes_data2 = aux;
    }

    for (i = dia_data1; i < meses_dias[mes_data1]; i++)
        total_mes += 1;
    
    for (i = 1; i < dia_data2; i++)
        total_mes += 1;
    
    return total_mes;
}


int calcula_mes_dias(int mes_data1, int mes_data2)
{
    int meses_dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, aux = 0;
    int total_mes = 0;
    
    for (int i = mes_data1; i < mes_data2; i++)
        total_mes += meses_dias[i-1]; 

    return total_mes;
}

int calcula_dias(struct dma data1, struct dma data2)
{
    int total_dias = 0;
    int i, j;

    if ((data1.ano == data2.ano && data1.mes > data2.mes) || 
    (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia > data2.dia)) 
    {
        struct dma aux = data1;
        data1 = data2;
        data2 = aux;
    }

    if (data1.ano == data2.ano && data1.mes == data2.mes)
        total_dias = data1.dia - data2.dia;

    if (data1.mes != data2.mes)
    {
       total_dias = calcula_mes_dias(data1.mes, data2.mes);
       total_dias += data1.dia - data2.dia;
    }
    return total_dias;
    
}

int calcula_dias2(struct dma data1, struct dma data2)
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
