#include <stdio.h>

struct yyy {
  int k;
  struct yyy *a;
  struct yyy *b;
} *pt2, *pt1;

int main(void){
  pt1->a = pt2;
  pt1->b = pt2->b;
  pt2->b->a = pt1;
  pt2->b = pt1;
}