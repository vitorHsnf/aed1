/*13 - Suponha que v é um vetor. Descreva o porquê existe uma 
diferença entre escrever v[3] e v + 3*/

#include <stdio.h>

void main()
{
    int v[5] = {1, 2, 3, 4 ,5};
    printf("%d ", v[3]);
    printf("%d ", v+4);
}