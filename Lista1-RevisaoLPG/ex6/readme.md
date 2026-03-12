# ex6

## ⚠️ Como compilar

Compile **apenas um exercício por vez**, nunca todos juntos.

Cada arquivo `questaoX.c` contém uma função `main`, então compilá-los juntos causará erro de múltiplas definições.

### Exemplos de compilação

```bash
gcc -Wall defs.c questaoA.c -o ex6
```

```bash
gcc -Wall defs.c questaoB.c -o ex6
```

```bash
gcc -Wall defs.c questaoC.c -o ex6
```

### Executar

```bash
./ex6
```

---

> **Nunca faça:**
> ```bash
> gcc -Wall defs.c questaoA.c questaoB.c questaoC.c  # ❌ erro!
> ```