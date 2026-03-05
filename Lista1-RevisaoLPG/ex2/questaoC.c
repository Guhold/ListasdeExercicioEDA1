#include <stdio.h>

typedef struct teste
{
  int inteiro;
  float real;
  char nome[30];
} informacao;

// Nó codigo original, p é ponteiro e x é uma struct, portanto não é possível atribuir x a p diretamente.

/*
int main(void){
  informacao *p, x = {321, 2.39, "Silva"};
  p = x;
  printf(“Campos da variável x : % i, % f, % s”, p->inteiro, p->real, p->nome);
}
*/

// Código Corrigido

int main(void){
  informacao *p, x = {321, 2.39, "Silva"};
  p = &x;
  printf("Campos da variavel x : % i, % f, % s", p->inteiro, p->real, p->nome);
}