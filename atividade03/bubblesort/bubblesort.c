/*
    Nome:   Vitor Hugo Trovão de Moraes
    Mat:    2215310049
    
    Bubblesort
*/

#include <stdio.h>
#include <time.h>

void imprime_vetor(int* vetor, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d \n", vetor[i]);
}

void bubblesort(int vetor[], int n)
{
    int i, j, temp;

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {

            if (vetor[j] > vetor[j+1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}