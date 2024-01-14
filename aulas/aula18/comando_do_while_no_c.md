# Comando do while no C

O comando `do while` é uma estrutura de repetição indeterminada, onde um bloco de código é executado pelo menos uma vez, mesmo se a condição não for inicialmente atendida. Pode-se dizer que é o comando `while` de cabeça para baixo.

## Sintaxe Básica

Em C, a sintaxe básica do comando `do while` é a seguinte:

```c
do {
    // Código a ser repetido
} while (<condição>);
```

O bloco de código dentro do `do while` é executado primeiro, e a condição é verificada depois. Se a condição for 1 (verdadeira), o bloco de código será repetido. Caso contrário, a execução sai da iteração.

Exemplo:

```c
int i = 1;

// Loop para imprimir números de 1 a 5
do {
    printf("%d ", i);
    i++;
} while (i <= 5);
```
