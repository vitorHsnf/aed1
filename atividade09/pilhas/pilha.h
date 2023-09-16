#include <stdio.h>
#include <stdlib.h>

#define COLUNAS 10
#define LINHAS 10

typedef struct pilha Pilha;


struct pilha{
    Cell matriz[LINHAS * COLUNAS];
    int topo;
};

Pilha* criar()
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}

int eh_vazio(Pilha *p)
{
    if (p->topo == -1)
        return 1;
    else
        return 0;
}

// Empilhar um novo elemento no topo da pilha
Pilha* push(Pilha *p, int linha, int coluna)
{
    if (p->topo < LINHAS * COLUNAS - 1)
    {
        Cell *c = (Cell *) malloc (sizeof(Cell));
        
        c->linha = linha;
        c->coluna = coluna;

        p->topo++;
        p->matriz[p->topo] = *c;
        

        printf("Celula [%d][%d] adicionada na pilha \n", c->linha, c->coluna);

        free(c);
    }

    else
        printf("Pilha cheia \n");

    return p;
}

// Desempilha o elemento no topo da lista
Cell pop(Pilha *p)
{
    Cell c;
    c = p->matriz[p->topo];
    p->topo--;

    return c;
}