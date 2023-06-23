/*06 - Dadas duas matrizes reais A[m,n] e B[n,p], 
       calcular o produto de A por B.*/


#include <stdio.h>
#define MAX_m 100
#define MAX_n 100
#define MAX_p 100


void multiplica_matriz(int m, int n, int p, 
                        float matriz_a[MAX_m][MAX_n], float matriz_b[MAX_n][MAX_p], float matriz_res[MAX_m][MAX_p]);

int main()
{   
    // Linhas e Colunas
    int m, n, p; 
    // Índices
    int i, j; 
    float matriz_A[MAX_m][MAX_n], 
          matriz_B[MAX_n][MAX_p], 
          matriz_produto[MAX_n][MAX_p];

    // M = Linhas da Matriz A
    printf("M: ");
    scanf("%d", &m);

    // N = Colunas da Matriz A = Linhas da Matriz B
    printf("N: ");
    scanf("%d", &n);

    // P = Colunas da Matriz B
    printf("P: ");
    scanf("%d", &p);

    // Entrada de Dados: Matriz A
    printf("Matriz A: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%f", &matriz_A[i][j]);
    }

    // Entrada de Dados: Matriz B
    printf("Matriz B: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
            scanf("%f", &matriz_B[i][j]);
    }

    multiplica_matriz(m, n, p, matriz_A, matriz_B, matriz_produto);

    // Saída de Dados
    printf("Matriz A: \n");
    for (i = 0; i < m; i++)
    {   
        for (j = 0; j < n; j++)
            printf("[%.2f] ", matriz_A[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("Matriz B: \n");
    for (i = 0; i < n; i++)
    {   
        for (j = 0; j < p; j++)
            printf("[%.2f] ", matriz_B[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("Matriz Produto: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
            printf("[%.2f]", matriz_produto[i][j]);
        printf("\n");
    }
    return 0;
}


void multiplica_matriz(int m, int n, int p, 
                        float matriz_a[MAX_m][MAX_n], float matriz_b[MAX_n][MAX_p], float matriz_res[MAX_n][MAX_p])
{
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
                matriz_res[i][j] += matriz_a[i][k]*matriz_b[k][j];
        }
    }



}