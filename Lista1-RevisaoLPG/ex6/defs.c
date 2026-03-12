#include "defs.h"
#include <stdio.h> 

int contaNodoA(struct nodo *p){
  if (!p){
    return 0;
  }
  
  return 1 + contaNodoA(p->link);
}

int contaNodoB(struct nodo *p){
  if (!p){
    return 0;
  }
  int contador = 1;
  struct nodo *nodoInicial = p;

  while (p->link != nodoInicial){
    contador++;
    p = p->link;
  }

  return contador;
}

int contaNodoC(struct nodo*p){
  if (!p){
    return 0;
  }
  if (p == p->link){
    return 0;
  }
  return 1 + contaNodoC(p->link);
}

int contaNodoAux(struct nodoD *p){
  if (!p){
    return 0;
  }

  return 1 + contaNodoAux(p->dir);
}

int contaNodoD(struct descritor *p){
  return contaNodoAux(p->primeiro);
}