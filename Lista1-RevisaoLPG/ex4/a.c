#include <stdio.h>

struct xxx {
  int w;
  struct xxx *b;
} *pt3, *pt2, *pt1;

int main(void){
  pt1->b = pt2;
  pt2->b = pt3;
}