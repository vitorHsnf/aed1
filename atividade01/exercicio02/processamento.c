#include <stdio.h>
#include "processamento.h"

// Função que imprime, na ordem inversa, um vetor de n numeros reais
void imprime_vetor_inverso(double *vetor, int tamanho)
{
    int i;
    for (i = tamanho-1; i >= 0; i--)
        printf("%.2lf ", vetor[i]);
}