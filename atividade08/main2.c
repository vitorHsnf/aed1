#include "lde_descritor.h"
#define TAMANHO 10

int main(int argc, char**argv)
{
    Descritor *lista;
    
    lista = criar();

    lista = inserir_inicio(lista, 2);
    lista = inserir_inicio(lista, 1);
    lista = inserir_fim(lista, 5);
    lista = inserir_fim(lista, 3);
    lista = inserir_inicio(lista, 8);
    lista = excluir_inicio(lista);
    lista = excluir_fim(lista);

    imprimir(lista);

    printf("%d\n", buscar(lista, 1));
    printf("%d\n", buscar(lista, 7));
}