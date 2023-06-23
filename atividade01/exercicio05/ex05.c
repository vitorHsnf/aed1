/* 
Faça um Programa que leia 20 números inteiros e armazene-os num vetor. 
Armazene os números pares no vetor PAR e os números IMPARES no vetor impar.
Imprima os três vetores.
*/

#include <stdio.h>
#define TAMANHO 20

void imprime_vetor(int n, int *vetor);

int main()
{
    int i;
    int conta_pares = 0, conta_impares = 0;
    int total[TAMANHO];
    int pares[TAMANHO];
    int impares[TAMANHO];

    // Entrada de dados
    for (i = 0; i < TAMANHO; i++)
    {
        scanf("%d", &total[i]);

        if (total[i] % 2 == 0)
        {
            pares[conta_pares] = total[i];
            conta_pares++;
        }
        else
        {
            impares[conta_impares] = total[i];
            conta_impares++;
        }
    }

    // Saída de Dados
    printf("Total: ");
    imprime_vetor(TAMANHO, total);

    printf("Pares: ");
    imprime_vetor(conta_pares, pares);

    printf("Impares: ");
    imprime_vetor(conta_impares, impares);

    return 0;
}

void imprime_vetor(int n, int* vetor)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}