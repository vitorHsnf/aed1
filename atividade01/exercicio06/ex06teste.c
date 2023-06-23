#include <stdio.h>
#define MAX_m 100
#define MAX_n 100
#define MAX_p 100

void imprimir_matriz(int linhas, int colunas, float* matriz)
{
    int i, j;

    for (i = 0; i < linhas; i++)
    {   
        for (j = 0; j < colunas; j++)
            printf("[%.2f] ", matriz[colunas*i+j]); // *(*(a+i)+j))
        printf("\n");
    }
}
int main()
{   
    int m, n, p; // Linhas e Colunas
    int i, j;
    float matriz_A[MAX_m][MAX_n], matriz_B[MAX_n][MAX_p];

    // M = Linhas da Matriz A
    printf("M: ");
    scanf("%d", &m);

    // N = Colunas da Matriz A e Linhas da Matriz B
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

    // Saída de Dados
    printf("Matriz A: \n");
    imprimir_matriz(m, n, (float*) matriz_A);
    printf("\n");

    printf("Matriz B: \n");
    imprimir_matriz(n, p, (float*) matriz_B);

    return 0;
}