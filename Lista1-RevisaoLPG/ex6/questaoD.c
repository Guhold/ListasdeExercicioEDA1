#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

struct nodoD* criaNodo(int v){
    struct nodoD *n = malloc(sizeof(struct nodoD));
    n->x = v;
    n->esq = NULL;
    n->dir = NULL;
    return n;
}

int main(void){
  struct descritor lista;

  struct nodoD *n1 = criaNodo(1);
  struct nodoD *n2 = criaNodo(2);
  struct nodoD *n3 = criaNodo(3);
  struct nodoD *n4 = criaNodo(4);
  
  n1->dir = n2;
  n2->esq = n1;
  n2->dir = n3;
  n3->esq = n2;
  n3->dir = n4;
  n4->esq = n3;

  lista.primeiro = n1;
  lista.ultimo = n4;
  lista.link = n1;

  printf("Nodos: %d\n", contaNodoD(&lista));
}