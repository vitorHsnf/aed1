/*02 - Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.*/
#include <stdio.h>
#include "processamento.h"
#define TAMANHO 10

int main(){
    int i;
    double vetor[TAMANHO];

    // Entrada de Dados
    for (i = 0; i < TAMANHO; i++)
        scanf("%lf", &vetor[i]);
    
    // Saida de Dados
    printf("Vetor na ordem inversa: ");
    imprime_vetor_inverso(vetor, TAMANHO);

    return 0;
}