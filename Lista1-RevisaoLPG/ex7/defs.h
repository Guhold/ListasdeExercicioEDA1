#ifndef DEFS_H
#define DEFS_H

struct data{
  int num;
};

typedef struct nodo{
  struct data dt;
  struct nodo *link;
}Nodo;

typedef struct descritor{
  int tamanho;
  Nodo *inicio;
}Descritor;

int reinicia(Descritor *p);
int insere(Descritor *p, Nodo *novo, int pos);

#endif