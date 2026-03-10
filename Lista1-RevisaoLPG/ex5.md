**Para ir do estado 1 para o estado 2:**
```c
  B->esq = p->esq;
  B->dir = p;
  p->esq = B;
```