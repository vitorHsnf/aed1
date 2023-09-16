#include <stdio.h>
#include <stdlib.h>

/* definição da estrutura de dados */
typedef struct no No;
typedef struct descritor Descritor;

struct no
{
	int dado;
	No* prox;
    No* ant;
};

struct descritor
{
	int qtde;
    No* primeiro;
	No* ultimo;
};

Descritor* criar()
{
    Descritor *d;

    d = (Descritor *) malloc ( sizeof( Descritor ));
    d->qtde = 0;
    d->primeiro = NULL;
    d->ultimo = NULL;

    return d;
}

Descritor* inserir_inicio( Descritor *d, int dado)
{
    No *novo;

    novo = (No *) malloc ( sizeof( No ) );
    novo->dado = dado;
    novo->ant = NULL;
    novo->prox = NULL;
    
    if (d->primeiro == NULL)
    {
        d->primeiro = novo;
        d->ultimo = novo;
    }

    else
    {
        novo->prox = d->primeiro;
        d->primeiro->ant = novo;
        d->primeiro = novo;
    }

    d->qtde++;

    return d;
}

Descritor* inserir_fim( Descritor *d, int dado)
{
    No* novo;
    novo = ( No *) malloc (sizeof ( No ) );
	novo->dado = dado;

    if (d->primeiro == NULL)
    {
        d->primeiro = novo;
        d->ultimo = novo;
    }

    else
    {
        novo->ant = d->ultimo;
        novo->prox = NULL;
        d->ultimo->prox = novo;
        d->ultimo = novo;
    }

    d->qtde++;

    return d;
}

Descritor* excluir_inicio( Descritor *d)
{
    No *temp;
    temp = d->primeiro;
    d->primeiro = d->primeiro->prox;
    d->primeiro->ant = NULL;
    
    temp->prox = NULL;
    free(temp);

    d->qtde--;

    return d;
}

Descritor* excluir_fim( Descritor *d)
{
    No *temp;
    temp = d->ultimo;
    d->ultimo = d->ultimo->ant;
    d->ultimo->prox = NULL;

    temp->ant = NULL;
    free(temp);

    d->qtde--;

    return d;


}

void imprimir(Descritor* d){

    No* temp;
    temp = d->primeiro;

    while (temp != NULL)
    {
        printf( "%d ", temp->dado);
        temp = temp->prox;
    }
    printf("\n");
    
}

int buscar(Descritor* d, int dado){
    No* temp;
    temp = d->primeiro;

    while (temp != NULL)
    {
        if (temp->dado == dado)
            return 1;
        temp = temp->prox;
    }
    return 0;
}