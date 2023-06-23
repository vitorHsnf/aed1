#include <stdio.h>
#include <stdlib.h>

void imprimir_matriz(int linhas, int colunas, float** matriz)
{
    int i, j;

    for (i = 0; i < linhas; i++)
    {  
        for (j = 0; j < colunas; j++)
            printf("[%.2f] ", matriz[i][j]); // *(*(a+i)+j))
        printf("\n");
    }
}

void le_matriz(int linhas, int colunas, float**matriz)
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            scanf("%f", &matriz[i][j]);
    }
}


float** alocar_matriz(int linhas, int colunas)
{
    float ** matriz;
    int i;

    matriz = malloc (linhas*sizeof(float*));
    for (i = 0; i < linhas; i++)
    {
        matriz[i] = malloc (colunas *sizeof(float));
    }

    return matriz;
}

void liberar_matriz(int linhas, float** matriz)
{
    int i;

    for (i = 0; i < linhas; i++)
        free(matriz[i]);
    
    free(matriz);
}

void multiplica_matriz(int m, int n, int p, 
                        float** matriz_a, float** matriz_b, float** matriz_res)
{
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            for (k = 0; k < n; k++)
                matriz_res[i][j] += matriz_a[i][k] * matriz_b[k][j];
        }
    }
}

int main()
{   
    int m, n, p;
    float **matriz_A, **matriz_B, **matriz_res;

    // m = Linhas da Matriz A
    printf("M: ");
    scanf("%d", &m);

    // n = Colunas da Matriz A e Linhas da Matriz B
    printf("N: ");
    scanf("%d", &n);

    // p = Colunas da Matriz B
    printf("P: ");
    scanf("%d", &p);

    // Alocação de Memória 
    matriz_A = alocar_matriz(m, n);
    matriz_B = alocar_matriz(n, p);
    matriz_res = alocar_matriz(m, p);

    // Entrada de Dados
    printf("Matriz A: \n");
    le_matriz(m, n, matriz_A);

    printf("Matriz B: \n");
    le_matriz(n, p, matriz_B);

    // Procesassamento
    multiplica_matriz(m, n, p, matriz_A, matriz_B, matriz_res);

    // Saída de Dados
    printf("Matriz A: \n");
    imprimir_matriz(m, n, matriz_A);
    printf("\n");

    printf("Matriz B: \n");
    imprimir_matriz(n, p, matriz_B);
 
    printf("Matriz Produto: \n");
    imprimir_matriz(m, p, matriz_res);

    // Liberando Memória
    liberar_matriz(m, matriz_A);
    liberar_matriz(n, matriz_B);
    liberar_matriz(m, matriz_res);

    return 0;
}