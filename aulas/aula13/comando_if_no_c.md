# Comando if no C

O comando `if` é uma estrutura de decisão simples que permite controlar o fluxo de execução em programas, onde um bloco de código será executado com base em determinadas condições.

## Sintaxe Básica

Em C, a sintaxe básica do comando `if` é a seguinte:

```c
if (<condição>) {
    // Código a ser executado
}
```

Se a `<condição>` for 1 (verdadeira), o bloco de código dentro do `if` é executado. Caso contrário, o bloco é ignorado.

Exemplo:

```c
int numero = 5;

// Verificar se o número é positivo
if (numero > 0) {
    printf("O número é positivo.\n");
}
```

## Sintaxe Completa

O comando `if` também pode ser combinado com `else` para lidar com condições contrárias. A sintaxe completa é a seguinte:

```c
if (<condição>) {
    // Código a ser executado
} else {
    // Código a ser executado
}
```

Se a `<condição>` for 1 (verdadeira), o bloco de código dentro do `if` é executado. Caso contrário, o bloco dentro do `else` será executado.

Exemplo:

```c
int numero = -5;

// Verificar se o número é positivo ou negativo
if (numero > 0) {
    printf("O número é positivo.\n");
} else {
    printf("O número é negativo.\n");
}
```

### Sintaxe Estendida

O comando `if` também permite construir estruturas de decisão mais sofisticadas por meio de um encademento de condições. A sintaxe estentida é:

```c
if (<condição1>) {
    // Código a ser executado
} else if (<condição2>) {
    // Código a ser executado
/* 
  ... outros else if ... 
*/
} else {
    // Código a ser executado
}
```

Se a `<condição1>` for 1 (verdadeira), o bloco de código dentro do `if` é executado. Caso contrário, se a `<condição2>` for 1 (verdadeira) o bloco dentro do `else if` será executado. Caso contrário, o bloco dentro do `else` será executado.

Exemplo:

```c
int numero = 0;

// Verificar se o número é positivo, negativo ou zero
if (numero > 0) {
    printf("O número é positivo.\n");
} else if (numero < 0) {
    printf("O número é negativo.\n");
} else {
    printf("O número é zero.\n");
}
```
