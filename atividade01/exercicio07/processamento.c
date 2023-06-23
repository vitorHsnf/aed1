#include <stdio.h>
#include <stdlib.h>

// Função que faz a alocação de memória para uma matriz de n linhas e colunas
int** alocar_matriz(int linhas, int colunas)
{
    int** matriz;
    int i;

    matriz = malloc (linhas*sizeof(int*));
    for (i = 0; i < linhas; i++)
    {
        matriz[i] = malloc (colunas *sizeof(int));
    }

    return matriz;
}

// Função que libera memória alocada da matriz
void liberar_matriz(int linhas, int** matriz)
{
    int i;

    for (i = 0; i < linhas; i++)
        free(matriz[i]);
    
    free(matriz);
}

// Função que lê matriz
void le_matriz(int linhas, int colunas, int**matriz)
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            scanf("%d", &matriz[i][j]);
    }
}

// Função que imprime matriz
void imprimir_matriz(int linhas, int colunas, int** matriz)
{
    int i, j;

    for (i = 0; i < linhas; i++)
    {  
        for (j = 0; j < colunas; j++)
            printf("[%d] ", matriz[i][j]); // *(*(a+i)+j))
        printf("\n");
    }
}

// Função que verifica se uma matriz é um quadrado mágico. Retorna 0 (False) ou 1 (True)
int ehQuadradoMagico(int** matriz, int ordem)
{   
    int soma1 = 0, soma2;
    int res = 0;
    int i, j;

    // Encontrando a soma da primeira linha
    for (i = 0; i < ordem; i++)
        soma1 += matriz[0][i];
    
    // Verificando a soma das linhas subsequentes
    for (i = 1; i < ordem; i++)
    {
        soma2 = 0;
        for (j = 0; j < ordem; j++)
            soma2 += matriz[i][j];

        if (soma2 != soma1)
            return res;
    }
    // Verificando a soma de cada coluna
    for (i = 0; i < ordem; i++)
    {
        soma2 = 0;
        for (j = 0; j < ordem; j++)
            soma2 += matriz[j][i];
        if (soma2 != soma1)
            return res;
    }

    // Verificando soma da diagonal secundária
    soma2 = 0;
    for (i = 0; i < ordem; i++)
        soma2 += matriz[i][(ordem-i)-1];
    
    if (soma2 != soma1)
        return res;

    
    // Se passar pelas verificações, a condição é verdadeira
    return res = 1;
}