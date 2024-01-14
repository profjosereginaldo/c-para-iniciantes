# Conversão de Tipos no C

A conversão de tipos, também conhecida como *casting*, é um processo importante para modificar o tipo de dado de uma variável para outro, principalmente, quando precisamos realizar operações que envolvem diferentes tipos de dados ou quando desejamos armazenar um valor de um tipo em uma variável de outro tipo.

## Tipos de Conversão no C

Em C, é possível realizar os seguintes tipos de conversão:

### Conversão Implícita

A conversão implícita ocorre automaticamente pelo compilador quando não há perda de dados ou precisão ao converter um tipo para outro. 

```c
int inteiro = 42;
float flutuante = inteiro; // Conversão implícita
```

### Conversão Explícita

A conversão explícita é quando o desenvolvedor explicitamente indica ao compilador a conversão de um tipo para outro. Isso é feito colocando o tipo desejado entre parênteses antes da variável a ser convertida.

```c
float flututante = 2500.50F;
int inteiro = (int)inteiro; // Conversão explícita
```

### ⚠️ Importante

Ao realizar conversões explícitas de tipos, é necessário ter cautela, pois pode haver perda de dados se o tipo de destino não puder representar todos os valores do tipo original.
