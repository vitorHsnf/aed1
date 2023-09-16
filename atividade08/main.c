#include "lista_dupla_encadeada.h"
#define TAMANHO 10

int main(int argc, char** argv)
{
    No *lista;
    
    lista = criar();

    lista = inserir_inicio(lista, 4);
    lista = inserir_inicio(lista, 2);
    lista = inserir_fim(lista, 3);
    lista = inserir_fim(lista, 5);
    lista = excluir_inicio(lista);
    lista = excluir_fim(lista);
    
    imprimir(lista);
    printf("%d", buscar(lista, 4));

}