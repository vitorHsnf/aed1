#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

/* Definição da estrutura */
typedef struct fila Fila;

struct fila{
    char tarefas[MAX][100];
    int inicio, fim;
};

// Cria uma nova lista com fila;
Fila* criar()
{
    Fila *lista;
    lista = (Fila *) malloc (sizeof(Fila));
    lista->inicio = -1;
    lista->fim = -1;

    return lista;
}

// Verifica se a lista está vazia
int is_empty(Fila *lista)
{
    if (lista->inicio == -1)
        return 1;
    else
        return 0;
}

// Verifica se a lista está cheia
int is_full(Fila *lista)
{
    if ((lista->fim + 1) % MAX == lista->inicio)
        return 1;
    else
        return 0;
}

// Adiciona uma nova tarefa na lista
Fila* adicionar_tarefa(Fila *lista, char *tarefa)
{
    if (isFull(lista))
    {
        printf("Lista cheia. \n");
        return lista;
    }

    if (isEmpty(lista))
        lista->inicio = lista->fim = 0;

    else
        lista->fim = (lista->fim + 1) % MAX;

    strcpy(lista->tarefas[lista->fim], tarefa);

    return lista;
}

// Retira a primeira tarefa da lista
Fila* retirar_tarefa(Fila *lista)
{
    if (isEmpty(lista))
    {
        printf("Lista vazia \n");
        return lista;
    }

    if (lista->inicio == lista->fim)
        lista->inicio = lista->fim = -1;
    else
        lista->inicio = (lista->inicio + 1) % MAX;

    return lista;
}

// Imprime na tela as tarefas na lista
void listar_tarefas(Fila *lista)
{

    int tarefa;
    int lista_fim = lista->fim;

    tarefa = lista->inicio;

    if (isEmpty(lista))
    {
        printf("Lista vazia \n");
        return;
    }
    
    printf("Tarefas na lista: \n");

    do {
        
       printf("%d. %s \n", tarefa + 1, lista->tarefas[tarefa]);
       tarefa = (tarefa + 1) % MAX; 

    } while (tarefa <= lista_fim);
}