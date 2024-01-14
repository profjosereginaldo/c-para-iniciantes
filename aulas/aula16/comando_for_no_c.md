# Comando for no C

O comando `for` é uma estrutura de repetição determinada que permite a implementação de iterações controladas, também conhecidas como *loops*, onde um bloco de código é executado várias vezes.

## Sintaxe Básica

Em C, a sintaxe básica do comando `for` é a seguinte:

```c
for (<inicialização>; <condição>; <incremento/decremento>) {
    // Código a ser repetido
}
```

A `<inicialização>` é utilizada para declarar uma variável de controle - **contador** -, que é verificada com a `<condição>` para determinar se a iteração deve ou não continuar. O `<incremento/decremento>` é uma operação que modifica a variável após cada iteração.

Exemplo:

```c
// Loop para imprimir números de 1 a 5
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```
