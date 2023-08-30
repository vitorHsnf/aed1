#include "tree.h"

int main()
{
    TreeNode* arvore;
    int valor;
    int inserir[] = {5,15,3,7,12,18,2,4,14};
    
    arvore = create(10, NULL);

    for(int i = 0; i < 9; i++)
    {
        arvore = insert(inserir[i], arvore);
        printf("Inseriste o valor: %d \n", inserir[i]);
    }

    scanf("%d", &valor);
    printf("%d", search(arvore, valor));
}