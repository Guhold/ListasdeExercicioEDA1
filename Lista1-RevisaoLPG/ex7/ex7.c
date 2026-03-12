#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

void imprimeLista(Descritor *d){
    Nodo *aux = d->inicio;

    printf("Lista: ");
    while(aux){
        printf("%d -> ", aux->dt.num);
        aux = aux->link;
    }
    printf("NULL\n");

    printf("Tamanho: %d\n", d->tamanho);
}

int main(void){
  Descritor lista;

  lista.inicio = NULL;
  lista.tamanho = 0;

  int pos, dt;
  
  while(1){
    printf("Digite a posicao e o numero a ser inserido (negativo para sair): ");
    scanf("%d %d", &pos, &dt);

    if (pos < 0 || dt < 0) break;
    
    Nodo *novo = malloc(sizeof(Nodo));
    if (!novo) {
      printf("Erro ao alocar memoria\n");
      reinicia(&lista);
      return -1;
    }
    
    novo->dt.num = dt;
    novo->link = NULL;

    if (insere(&lista, novo, pos) == 1){
      printf("Insercao falhou\n");
      free(novo);
    } else {
      printf("Numero inserido com sucesso\n");
    }
  }

  imprimeLista(&lista);

  if (reinicia(&lista) == 1){
    printf("Um erro aconteceu na execucao do programa\n");
  } else {
    printf("Lista reiniciada com sucesso\n");
  }
  
  imprimeLista(&lista);
  return 0;
}