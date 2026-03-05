#include <stdio.h>


typedef struct teste
{
  int inteiro;
  float real;
  char nome[30];
} informacao;

// No código original, como p é um ponteiro, não é possível acessar seus campos usando a notação de ponto (p.inteiro, p.real, p.nome). A notação correta para acessar os campos de uma struct através de um ponteiro é usando a seta (->), ou seja, p->inteiro, p->real, p->nome.

/*
int main(void){ 
  informacao *p, x = {321, 2.39, "Silva"};
  p = &x;
  printf(“Campos da variável x: %i, %f, %s”, p.inteiro, p.real, p.nome);
}
*/

// Código Corrigido

int main(void){ 
  informacao *p, x = {321, 2.39, "Silva"};
  p = &x;
  printf("Campos da variavel x: %i, %f, %s", p->inteiro, p->real, p->nome);
}