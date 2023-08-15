#include <stdio.h>
#include <time.h>
#include "insertionsort.c"
#define TAMANHO 1000

int main(int argc, char* argv[])
{
    int vetor[TAMANHO];
    double start, finish, elapsed;

    // Lê o vetor
    for (int i = 0; i < TAMANHO; i++)
        scanf("%d", &vetor[i]);

    // Inicia o cronomêtro 
    start = (double) clock() / CLOCKS_PER_SEC;

    insertion_sort(vetor, TAMANHO);

    // Finaliza o cronomêtro
    finish = (double) clock() / CLOCKS_PER_SEC;

    // Calcula e imprime o tempo gasto pelo algoritmo
    elapsed = (double) finish - start;
    printf("%f s \n", elapsed);

    return 0;

}