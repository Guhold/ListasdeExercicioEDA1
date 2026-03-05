# Exercício 1

## A)

- **#include** é usado para incluir bibliotecas externas ou incluir o conteúdo de um header no arquivo atual;

- **#define** é usado para declarar uma variável global, que funciona para todo o código;

- **#undef** é o oposto de #define, e remove a declaração de definição;

- **#ifdef** é usada para realizar alguma ação caso uma variável tenha sido definida com #define;

- **#ifndef** é o oposto de #ifdef, caso algo NÃO esteja definido, ele executa uma ação;

- **#if, #else, #elif** são extruturas condicionais padrão;

- **#endif** se localiza no fim de um comando #if para finalizar a condicional.

---

## B)

- **memcpy** pega o conteúdo de um trecho da memória especificado, com tamanho definido, e copia para um destino escolhido pelo usuário;

- **typedef** é usado em C para alterar a maneira de chamar tipos de dados já existentes na linguagem, quase como que criando um apelido para ele.

---

## C)

```c
int *p=NULL, **pp=NULL, x = 321, y=101;
p = &x;
pp=&p;
*p= -3;
y=**pp;
```

| Expressão | Valor |
|-----------|-------|
| p | 00007FFC127C92C0 |
| *p | -3 |
| x | -3 |
| &x | 00007FFC127C92C0 |
| pp | 00007FFC127C92C8 |
| *pp | 00007FFC127C92C0 |
| **pp | -3 |
| y = | -3 |

---

## D)

```c
struct teste2{ 
    int inteiro;
    float real;
    char nome[30];
    struct teste2 *self;
};
struct teste2 x = {115, 2.5, "Smith", NULL},*p=NULL;
p = &x;
p->self = &x;
```

| Expressão | Valor |
|-----------|-------|
| p | 00007FFE0F4FB570 |
| p->self | 00007FFE0F4FB570 |

---

## E)

```c
struct teste{ 
    int inteiro;
    float real;
    char nome[30];
    char rua[30];
    int *apont;
};
main(void)
{
    struct teste *p=NULL, x = {321, 2.39, "Silva", "Timbo", NULL};
    int y=101;
    p = &x; 
    p->apont = &y;
}
```

| Expressão | Valor |
|-----------|-------|
| p | 00007FFDE307C4B0 |
| &(p->real) | 00007FFDE307C4B4 |
| p->real | 2.39 |
| &(p->apont) | 00007FFDE307C4F8 |
| p->apont | 00007FFDE307C4A4 |
| *(p->apont) | 101 |