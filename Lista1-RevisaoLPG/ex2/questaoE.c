#include <stdio.h>
#include <stdlib.h>

typedef struct teste
{
  int inteiro;
  float real;
  char nome[30];
} informacao;

// No código original, p recebe uma alocaçao de memória usando malloc, mas logo em seguida é atribuído o endereço de x a p, o que causa um vazamento de memória, pois a memória alocada anteriormente não é liberada e não pode mais ser acessada.

/*
main(void){
  informacao *p, x = {321, 2.39, "Silva"};
  p = (struct teste *)malloc(sizeof(struct teste));
  p = &x;
  printf(“Campos da variável x : % i, % f, % s”, p->inteiro, p->real, p->nome);
}
*/

int main(void){
  informacao *p, x = {321, 2.39, "Silva"};
  p = malloc(sizeof(informacao));
  *p = x;
  printf("Campos da variavel x : % i, % f, % s", p->inteiro, p->real, p->nome);
}