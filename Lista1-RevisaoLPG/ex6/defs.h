#ifndef DEFS_H
#define DEFS_H

struct nodo{
  int num;
  struct nodo *link;
};

struct nodoD{
    struct nodoD *esq;
    int x;
    struct nodoD *dir;
};

struct descritor {
  unsigned int posicao;
  struct nodoD *primeiro, *ultimo, *link;
};

int contaNodoA(struct nodo *p);
int contaNodoB(struct nodo *p);
int contaNodoC(struct nodo *p);
int contaNodoD(struct descritor *p);

#endif