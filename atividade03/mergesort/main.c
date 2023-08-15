#include <stdio.h>
#include <time.h>
#include "mergesort.c"
#define TAMANHO 50000

int main()
{
    int vet[TAMANHO];
    double start, finish, elapsed;

    for (int i = 0; i < TAMANHO; i++)
        scanf("%d", &vet[i]);
    
    // Inicia o cronômetro
    start = (double) clock() / CLOCKS_PER_SEC;

    merge_sort(vet, 0, TAMANHO-1);

    // Finaliza o cronômetro
    finish = (double) clock() / CLOCKS_PER_SEC;

    // Calcula o tempo e imprime na tela
    elapsed = (double) finish - start;
    printf( "%f s \n", elapsed);
    
    return 0;
}