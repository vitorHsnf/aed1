#include <stdio.h>

void imprime_vetor(int *vetor, int n)
{
    int i;

    for (i = 0; i <= n; i++)
        printf("%d \n", vetor[i]);

}

void insertion_sort(int *vetor, int n)
{
    int i, j;
    int key;

    for (i = 1; i < n; i++)
    {
        key = vetor[i];
        j = i - 1;

        while (j >= 0 && key < vetor[j])
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = key;
    }
}