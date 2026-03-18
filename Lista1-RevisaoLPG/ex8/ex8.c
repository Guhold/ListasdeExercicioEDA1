#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

nodo* criaNodo(int valor){
  nodo *novo = (nodo*) malloc(sizeof(nodo));
  novo->x = valor;
  novo->link = NULL;
  return novo;
}

int main(){
  int tam = 3;

  descritor *d = (descritor*) malloc(sizeof(descritor) + tam * sizeof(nodo*));
  d->tamVet = tam;

  nodo *a = criaNodo(1);
  a->link = criaNodo(2);
  a->link->link = criaNodo(3);
  d->vet[0] = a;

  nodo *b = criaNodo(10);
  b->link = criaNodo(20);
  d->vet[1] = b;

  nodo *c = criaNodo(50);
  c->link = criaNodo(100);
  d->vet[2] = c;

  int total = contaNodo(d);

  printf("Total de nodos: %d\n", total);

  return 0;
}