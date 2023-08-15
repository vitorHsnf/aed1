#include <stdio.h>

void swap(int *vet, int i, int j)
{
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

int partition(int *vet, int left, int right)
{
    int pivot = vet[left];
    int i = left, j;

    for (j = left + 1; j <= right; j++)
    {
        if (vet[j] <= pivot)
        {
            i++;
            swap(vet, i, j);
        }
    }

    swap(vet, left, i);
    return i;
}

void quick_sort(int *vet, int left, int right)
{
    if (left >= right)
	    return;
    else
    {
	    int index_pivot = partition(vet, left, right);
        quick_sort(vet, left, index_pivot - 1);
        quick_sort(vet, index_pivot + 1, right);
    }
}

