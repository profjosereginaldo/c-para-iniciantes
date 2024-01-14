# Operador Ternário do C

O operador ternário `?:` permite criar uma estrutura de decisão de forma mais concisa do que uma estrutura `if-else` tradicional, economizando linhas de código.

## Sintaxe Básica

Em C, a sintaxe básica do operador ternário `?:` é a seguinte:

```c
<condição> ? <instrução1> : <instrução2>;
```

Se a <condição> for 1 (verdadeira), a <instrução1> será executada. Caso contrário, a <instrução2> será executada.

Exemplo:

```c
int numero = -5;

// Verificar se o número é positivo ou negativo
(numero > 0) ? printf("O número é positivo.\n") : printf("O número é negativo.\n");
```

### 💡 Dica

Utilize o operador `?:` para fazer a atribuição condicional de uma variável da seguinte maneira:

```c
<tipo> <variável> = <condição> ? <valor1> : <valor2>;
```
