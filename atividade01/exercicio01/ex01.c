/* 01 - Faça um Programa que leia um vetor de 5 números inteiros e mostre-os. */

#include <stdio.h>
#define TAMANHO 5
int main()
{   
    int vetor[TAMANHO];

    // Entrada de dados
    for (int i = 0; i < TAMANHO; i++)
        scanf("%d", &vetor[i]);
    
    // Saída de dados
    printf("Vetor lido: ");
    for (int i = 0; i < TAMANHO; i++)
        printf("%d ", vetor[i]);
    
    return 0;
}