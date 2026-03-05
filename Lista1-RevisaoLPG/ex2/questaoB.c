#include <stdio.h>
#include <stdlib.h>

typedef struct teste
{
  int inteiro;
  float real;
  char nome[30];
} informacao;

// No código original, a struct teste é renomeada como informação usando typedef, porém o código tenta alocar memória usando struct teste, também p não é inicializado antes de acessar seus campos, o que pode levar a comportamento indefinido.

/*
int main(void){
  informacao *p, x = {321, 2.39, "Silva"};
  p = (struct teste *)malloc(sizeof(struct teste));
  printf("Campos da variavel x : %d, %f, %s", p->inteiro, p->real, p->nome);
}
*/

// Código Corrigido

int main(void){
  informacao *p, x = {321, 2.39, "Silva"};
  p = malloc(sizeof(informacao));
  *p = x;
  printf("Campos da variavel x : %d, %f, %s", p->inteiro, p->real, p->nome);
  free(p);
}