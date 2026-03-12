#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

int main(void){
  // Código exemplo para testar a função contaNodoC
  struct nodo *p1, *p2, *p3;
  struct nodo x, y, z;
  p1 = &x, p2 = &y, p3 = &z;

  x.num = 1, x.link = p2;
  y.num = 2, y.link = p3;
  z.num = 3, z.link = p3;

  int qtdeNodos = contaNodoC(p1);
  printf("Qtde de Nodos: %d", qtdeNodos);
}