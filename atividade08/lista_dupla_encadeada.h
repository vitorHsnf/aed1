#include <stdio.h>
#include <stdlib.h>

/* definição da estrutura de dados */
typedef struct no No;

struct no
{
	int dado;
	No* prox;
    No* ant;
};


// Inicializa a lista
No* criar()
{
	return NULL;
}


// Adiciona um novo elemento ao começo da lista
No* inserir_inicio( No *lista, int dado )
{
	No *novo;

	novo = (No *)malloc( sizeof( No ) );
	novo->dado = dado;

    if (lista == NULL){
        novo->prox = novo;
        novo->ant = novo;
    } 

    else 
    {
        novo->prox = lista;
        novo->ant = lista->ant;
        lista->ant->prox = novo;
        lista->ant = novo;
    }

	return novo;
}

// Adiciona um novo elemento ao final da lista
No* inserir_fim( No* lista, int dado )
{
	No *novo;
	novo = ( No *) malloc (sizeof ( No ) );
	novo->dado = dado;

	if (lista == NULL){
		novo->ant = novo;
		novo->prox = novo;
		lista = novo;
	}

	else
	{
		novo->ant = lista->ant;
		lista->ant->prox = novo;
		novo->prox = lista;
		lista->ant = novo;
	}

	return lista;
}

// Retira o primeiro elemento da lista
No* excluir_inicio( No *lista )
{
	No *temp;

    temp = lista;
    lista = lista->prox;
	lista->ant = temp->ant;
	temp->ant->prox = lista;

	temp->prox = NULL;
	temp->ant = NULL;

    free(temp);

	return lista;
}

// Retira o último elemento da lista
No* excluir_fim( No *lista )
{
	No *temp;

	temp = lista->ant;
	lista->ant = temp->ant;
	temp->ant->prox = lista;

	temp->prox = NULL;
	temp->ant = NULL;

	free(temp);

	return lista;
}

// Imprime os dados da lista
void imprimir( No *lista )
{
	No *temp;

	temp = lista;

	do
	{
		printf("%d ", temp->dado);
		temp = temp->prox;
	} while (temp != lista);
	
	printf("\n");
}

// Faz a busca de um dado armazenado na lista
int buscar( No *lista, int dado )
{
	No *temp;

	temp = lista;

	do
	{
		if(temp->dado == dado)
			return 1;

		temp = temp->prox;
	} 
	while( temp != lista );
	
	return 0;
    
}