/*14 - O código abaixo contém a declaração de algumas variáveis e ponteiros. 
Quando você executa esse código os valores x, y e p serão os valores de x, y e p 
ao final do trecho de código abaixo?*/

#include <stdio.h>

void main() {
   int x, y, *p; 
   y = 0;
   p = &y;
   x = *p;
   x = 4;
   (*p)++;
   --x;
   (*p) += x;

   printf("%d %d %x", x, y, p);
}