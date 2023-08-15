#include <stdio.h>
#include <time.h>
#include "bubblesort.c"
#define TAMANHO 500000

int main(int argc, char *argv[])
{
    int vetor[TAMANHO];
    double start, finish, elapsed;

    // Ler o vetor
    for (int i = 0; i < TAMANHO; i++)
        scanf("%d", &vetor[i]);
    
    // Inicia o cronômetro
    start = (double) clock() / CLOCKS_PER_SEC;

    bubblesort(vetor, TAMANHO);
    
    // Finaliza o cronômetro
    finish = (double) clock() / CLOCKS_PER_SEC;
	
    // Calcula o tempo gasto e imprime na tela
    elapsed = (double) finish - start;

    printf( "%f s \n", elapsed);

    return 0;
}