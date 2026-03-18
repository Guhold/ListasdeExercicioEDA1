#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

int contaNodo(descritor *p){
  int tamVet = p->tamVet;
  int resultado = 0;

  for (int i = 0; i < tamVet; i++){
    resultado += auxContaNodo(p->vet[i]);
  }

  return resultado;
}

int auxContaNodo(nodo *n){
  if (!n){
    return 0;
  }
  
  return 1 + auxContaNodo(n->link);
}