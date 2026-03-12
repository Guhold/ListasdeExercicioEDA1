#ifndef DEFS_H
#define DEFS_H
#endif

struct nodo{
  int num;
  struct nodo *link;
};

int contaNodoA(struct nodo *p);
int contaNodoB(struct nodo *p);
int contaNodoC(struct nodo *p);