#include <stdio.h>
#include <time.h>
#include "quicksort.c"
#define TAMANHO 200000

int main()
{
    int *vet;
    double start, finish, elapsed;

    // ler o vetor
    for (int i = 0; i < TAMANHO; i++)
        scanf("%d", &vet[i]);
    
    // inicia o cronometro
    start = (double) clock() / CLOCKS_PER_SEC;

    quick_sort(vet, 0, TAMANHO);

    // finaliza o cronometro
    finish = (double) clock() / CLOCKS_PER_SEC;

    // calcula o tempo e imprime na tela
    elapsed = (double) finish - start;
    printf( "%f s \n", elapsed);
    
    return 0;
    
}