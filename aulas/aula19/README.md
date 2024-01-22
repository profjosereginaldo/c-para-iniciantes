# Comandos break e continue no C

Os comandos `break` e `continue` podem ser utilizados dentro dos comandos de repetição [for](../aula16/comando_for_no_c.md), [while](../aula17/comando_while_no_c.md) e [do while](../aula18/comando_do_while_no_c.md). Eles permitem interromper ou pular iterações de um programa com base em condições específicas. 

## Interromper uma iteração

O comando `break` é utilizado para interromper imediatamente a execução de uma iteração quando uma determinada condição é atendida.

Exemplo:

```c
int i;

// Loop para imprimir números de 1 a 5
for (i = 1; i <= 5; i++) {
    if (i == 3) {
        break;  // Interrompe o loop quando i atinge 3
    }
    printf("%d ", i);
}
```

### ⚠️ Importante

Cuidado ao utilizar os comandos `for`, `while` e `do while`, pois eles podem gerar um *loop infinito*, o que significa que as iterações não serão interrompidas automaticamente.

## Pular uma iteração

O comando `continue` é utilizado para pular a execução do código restante dentro de um *loop* e ir para a próxima iteração, ignorando o código que vem depois do `continue` dentro do **loop**.

Exemplo:

```c
int i;

// Loop para imprimir números de 1 a 5
for (i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;  // Pula para a próxima iteração quando i atinge 3
    }
    printf("%d ", i);
}
```

