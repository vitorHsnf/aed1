/* 
07 - Dizemos que uma matriz quadrada inteira é um quadrado mágico (1) 
se a soma dos elementos de cada linha, a soma dos elementos de cada coluna 
e a soma dos elementos das diagonais principal e secundária são todas iguais. 
Dada uma matriz quadrada A[n,n] , verificar se A é um quadrado mágico
*/

#include <stdio.h>
#include "processamento.c"

int main(int argc)
{
    int **arr;
    int n;

    // Lendo o tamanho da matriz
    scanf("%d", &n);

    // Alocando memória
    arr = alocar_matriz(n, n);

    // Lendo os elementos da matriz
    le_matriz(n, n, arr);
    
    // Impressão da Matriz
    imprimir_matriz(n, n, arr);

    // Verificando a condição de ser quadrado mágico
    if(ehQuadradoMagico(arr, n) == 1)
        printf("\nEh um quadrado magico");
    else   
        printf("\nNao eh um quadrado magico");
    
    return 0;
}