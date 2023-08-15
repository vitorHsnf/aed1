#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int *vet, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d \n", vet[i]);
}

// Função que combina e ordena as partes de um vetor 
void merge(int* vet, int left, int middle, int right)
{
    
    int i, j, k; // Índices
    int n1 = middle - left + 1; // Vetor à esquerda 
    int n2 = right - middle; // Vetor à direita

    // Alocação dinâmica para os "dois vetores"
    int *left_vet = (int*)malloc (sizeof(int) * n1);
    int *right_vet = (int*) malloc (sizeof(int) * n2);

    for (i = 0; i < n1; i++)
        left_vet[i] = vet[left + i];

    for (j = 0; j < n2; j++)
        right_vet[j] = vet[middle + 1 + j];

    // Valores iniciais dos índices para ordenação
    i = 0;
    j = 0;
    k = left;

    // Processando o merge
    while (i < n1 && j < n2)
    {
        if (left_vet[i] <= right_vet[j])
        {
            vet[k] = left_vet[i];
            i++;
        }
        else
        {
            vet[k] = right_vet[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        vet[k] = left_vet[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        vet[k] = right_vet[j];
        j++;
        k++;
    }

    // Após finalizar, libera a memória alocada
    free(left_vet);
    free(right_vet);
}

void merge_sort(int* vet, int left, int right)
{
    if (left < right) 
    {
        int middle = (left + right) / 2; // Posição que "divide" o vetor ao meio
        merge_sort(vet, left, middle); // Chamada para a metade esquerda do vetor
        merge_sort(vet, middle+1, right); // Chamada para a metade direita do vetor

        merge(vet, left, middle, right); // Ordenação das partes do vetor
    }
}