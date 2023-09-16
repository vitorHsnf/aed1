#include <stdio.h>
#include <stdlib.h>
#include "labirinto.h"

int main()
{   
    /* Leitura arquivo com fscanf*/
    FILE *file = fopen("labirinto.txt", "r");
    int num_linhas, num_colunas;
    int maze[MAX_LINHAS][MAX_COLUNAS];
    
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo. \n");
        return 1;
    }

    fscanf(file, "%d %d", &num_linhas, &num_colunas);

    for (int i = 0; i < num_linhas; i++)
    {
        for (int j = 0; j < num_colunas; j++)
            fscanf(file, "%d", &maze[i][j]);
    }

    fclose(file);

    /* Leitura padrão com scanf
    int maze[MAX_LINHAS][MAX_COLUNAS];

    for (int i = 0; i < NUM_LINHAS; i++)
    {
        for (int j = 0; j < NUM_COLUNAS; j++)
            scanf("%d", &maze[i][j]);
        scanf("\n"); 
    } 
    */

    printf("Labirinto: \n");
    imprimir_labirinto(maze, NUM_LINHAS, NUM_COLUNAS);

    return 0;
}