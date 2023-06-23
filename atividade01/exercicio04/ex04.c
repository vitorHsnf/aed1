/* 
Faça um Programa que peça as quatro notas de 10 alunos, calcule 
e armazene num vetor a média de cada aluno, imprima o número de 
alunos com média maior ou igual a 7.0.
*/

#include <stdio.h>
#define ALUNOS 3
#define TAMANHO 4

float calcular_media(int n, float* notas);

int main()
{
    float notas[TAMANHO];
    float medias[ALUNOS];
    int i, j;
    int res; 

    // Entrada de Dados
    for (i = 0; i < ALUNOS; i++)
    {   
        printf("Aluno %d \n", i+1);
        for (j = 0; j < TAMANHO; j++)
        {
            printf("%do nota: ", j+1);
            if (scanf("%f", &notas[j]) != 1 || notas[j] < 0 || notas[j] > 10)
            {
                printf("Nota invalida. Digite novamente.\n");
                j--; // Permite ao usuário digitar novamente a nota inválida
            }
        }

        // Chamada da função
        medias[i] = calcular_media(TAMANHO, notas);
    }

    // Saída de Dados
    printf("\nMedias (maior ou igual a 7.0) \n");
    for (i = 0; i < ALUNOS; i++)
        if (medias[i] >= 7.0)
            printf("Aluno %d: \t%.2f \n", i+1, medias[i]);

    return 0;
}

float calcular_media(int n, float* notas)
{
    int i;
    float soma = 0;
    float media = 0;

    for (i = 0; i < n; i++)
        soma += notas[i];
    
    media = soma/n;

    return media;
}