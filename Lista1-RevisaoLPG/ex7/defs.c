#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

int reinicia(Descritor *p){
  Nodo *aux = p->inicio;

  if (!aux) return 1;
  
  while (aux){
    p->inicio = aux->link;
    free(aux);
    aux = p->inicio;
  }

  p->tamanho = 0;
  return 0;
}

int insere(Descritor *p, Nodo *novo, int pos){
  if (pos < 0 || pos > p->tamanho) return 1;

  if (pos == 0){
    novo->link = p->inicio;
    p->inicio = novo;
    p->tamanho++;
    return 0;
  }

  Nodo *aux = p->inicio;
  for (int i = 0; i < pos - 1; i++){
    aux = aux->link;
  }
  novo->link = aux->link;
  aux->link = novo;
  p->tamanho++;
  return 0;
}