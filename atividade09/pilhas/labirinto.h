#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define MAX_LINHAS 10
#define MAX_COLUNAS 10

typedef struct cell Cell;

struct cell{
    int linha, coluna;
};

int isValid(int linha, int coluna, int num_linhas, int num_colunas)
{
    if ((linha >= 0 && linha < num_linhas) && (coluna >= 0 && coluna < num_colunas))
    {
        return 1;
    } 
    else 
        return 0;
}

void imprimir_labirinto(int maze[MAX_LINHAS][MAX_COLUNAS], int num_linhas, int num_colunas)
{
    for (int i = 0; i < num_linhas; i++)
    {
        for (int j = 0; j < num_colunas;j++)
            printf("%d", maze[i][j]);

        printf("\n");
    }
}

int resolver_labirinto(int maze[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas)
{   
    Cell inicio;
    Cell fim;
    Pilha *pilha;

    inicio = {0, 0};
    fim = {linhas - 1, colunas - 1};
    pilha = criar();
}