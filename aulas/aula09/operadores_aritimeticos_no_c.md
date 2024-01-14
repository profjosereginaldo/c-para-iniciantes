# Operadores Aritméticos no C

Os operadores aritméticos são essenciais para realizar cálculos matemáticos em programas. Em C, são suportados os seguintes operadores aritméticos:

## Adição (+)

O operador de adição `+` realiza a soma de dois operandos.

```c
int resultado = 5 + 3; // 8
```

## Subtração (-)

O operador de subtração `-` calcula a diferença entre dois operandos.

```c
int resultado = 10 - 4; // 6
```

## Multiplicação (*)

O operador de multiplicação `*` efetua a multiplicação de dois operandos.

```c
int resultado = 3 * 7; // 21
```

## Divisão (/)

O operador de divisão `/` faz a divisão do operando da esquerda pelo operando da direita.

```c
int resultado1 = 1 / 2; // 0, pois é um inteiro
float resultado2 = 10.0F / 3.0F; // 3.3333...
```

## Módulo (%)

O operador de módulo `%` retorna o resto da divisão do operando da esquerda pelo operando da direita.

```c
int resultado = 10 % 3; // 1 (resto da divisão)
```

## Incremento (++) e Decremento (--)

Os operadores de incremento `++` e decremento `--` aumentam ou diminuem o valor de uma variável em 1, respectivamente.

```c
int numero = 5;
numero++; // 6
numero--; // 5 novamente
```