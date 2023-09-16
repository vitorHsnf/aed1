#include <stdio.h>
#include "fila.h"
#define TAMANHO 3

int main(int argc, char** argv)
{

    Fila *lista;
    char tarefa[100];

    lista = criar();

    for (int i = 0; i < TAMANHO; i++)
    {   
        fgets(tarefa, sizeof(tarefa), stdin);
        tarefa[strcspn(tarefa, "\n")] == '\0';
        
        adicionar_tarefa(lista, tarefa);
    }

    listar_tarefas(lista);
    retirar_tarefa(lista);
    listar_tarefas(lista);
}