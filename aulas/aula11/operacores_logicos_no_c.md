# Operadores Lógicos no C

Os operadores lógicos são utilizados para realizar operações de lógica booleana manipulando os valores `0` (falso) e `1` (verdadeiro). Essas operações possibilitam a criação de condições lógicas mais complexas, permitindo que o programa tome decisões dinâmicas em resposta às circunstâncias.

Em C, são suportados os seguintes operadores lógicos:

## E lógico (&&)

O operador "E lógico" `&&` retorna 1 se ambos os operandos forem 1. Caso contrário, retorna 0.

```c
int p = 5 > 0; // 1 (verdadeiro)
int q = 5 < 0; // 0 (falso)
int resultado = p && q; // 0 (falso)
```

## Ou lógico (||)

O operador "Ou lógico" `||` retorna 1 se pelo menos um dos operandos for 1. Retorna 0 apenas se ambos os operandos forem 0.

```c
int p = 5 > 0; // 1 (verdadeiro)
int q = 5 < 0; // 0 (falso)
int resultado = p || q; // 1 (verdadeiro)
```

## Não lógico (!)

O operador "Não lógico" `!` inverte o valor do operando. Se o operando for 1, o operador a torna 0, e vice-versa.

```c
int p = 5 > 0; // 1 (verdadeiro)
int resultado = !p; // 0 (falso)
```
