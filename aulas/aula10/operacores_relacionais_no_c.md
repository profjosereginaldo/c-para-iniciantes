# Operadores Relacionais no C

Os operadores relacionais são utilizados para realizar comparações entre valores, resultando em verdadeiro ou falso com base na relação estabelecida entre os operandos.

### ⚠️ Importante

Na linguagem C, não existe um tipo de dado booleano. Assim, o valor falso é representado por 0, e o valor verdadeiro é representado por 1.

Em C, são suportados os seguintes operadores relacionais:

## Igual a (==)

O operador de igualdade `==` verifica se os operandos são iguais.

```c
int a = 5;
int b = 10;
int resultado = a == b; // 0 (falso)
```

## Diferente de (!=)

O operador de diferença `!=` verifica se os operandos são diferentes.

```c
int a = 5;
int b = 10;
int resultado = a != b; // 1 (verdadeiro)
```

## Menor que (<)

O operador de menor que `<` verifica se o operando da esquerda é menor que o operando da direita.

```c
int a = 10;
int b = 5;
int resultado = a < b; // 0 (falso)
```

## Maior que (>)

O operador de maior que `>` verifica se o operando da esquerda é maior que o operando da direita.

```c
int a = 10;
int b = 5;
int resultado = a > b; // 1 (verdadeiro)
```

## Menor ou Igual a (<=)

O operador de menor ou igual a `<=` verifica se o operando da esquerda é menor ou igual ao operando da direita.

```c
int a = 10;
int b = 10;
int resultado = a <= b; // 1 (verdadeiro)
```

## Maior ou Igual a (>=)

O operador de maior ou igual a `>=` verifica se o operando da esquerda é maior ou igual ao operando da direita.

```c
int a = 10;
int b = 10;
int resultado = a >= b; // 1 (verdadeiro)
```
