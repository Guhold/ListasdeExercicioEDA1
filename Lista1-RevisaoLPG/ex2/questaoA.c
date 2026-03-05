#include <stdio.h>

typedef struct teste
{
  int inteiro;
  float real;
  char nome[30];
} informacao;

// No código original, p não é inicializado antes de ir para a condicional, portanto contém lixo de memória.

/*
int main(void){
  informacao *p, x = {321, 2.39, "Silva"};
  if (p){
    printf(“ponteiro inicializado corretamente \n”);
    printf(“valores da struct X : % i, % f, % s”, p->inteiro, p->real, p→nome);
  }
  else{
    printf(“o ponteiro está anulado”);
  }
}
*/

// Código Corrigido

int main(void){
  informacao *p, x = {321, 2.39, "Silva"};
  p = &x;
  if (p){
    printf("ponteiro inicializado corretamente \n");
    printf("valores da struct X : %d, %f, %s", p->inteiro, p->real, p->nome);
  }
  else{
    printf("o ponteiro está anulado");
  }
}