# Comando while no C

O comando `while` é uma estrutura de repetição indeterminada que também permite a implementação de *loops*, nos quais um bloco de código é executado enquanto uma condição é atendida.

## Sintaxe Básica

Em C, a sintaxe básica do comando `while` é a seguinte:

```c
while (<condição>) {
    // Código a ser repetido
}
```

O bloco de código dentro do `while` é executado repetidamente enquanto a `<condição>` for 1 (verdadeira).

Exemplo:

````c
int i = 1;

// Loop para imprimir números de 1 a 5
while (i <= 5) {
    printf("%d ", i);
    i++;
}
```