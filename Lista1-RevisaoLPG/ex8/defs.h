#ifndef DEFS_H
#define DEFS_H

typedef struct descritor{
  int tamVet;
  struct nodo *vet[];
}descritor;

typedef struct nodo{
  int x;
  struct nodo *link;
}nodo;

int contaNodo(descritor *p);
int auxContaNodo(nodo *n);

#endif