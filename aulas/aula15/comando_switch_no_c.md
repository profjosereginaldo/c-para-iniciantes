# Comando switch no C

O comando `switch` é uma estrutura de decisão múltipla que também permite controlar o fluxo de execução em programas. Esse comando compara uma variável com diferentes valores, executando blocos de código correspondentes.

## Sintaxe Básica

Em C, a sintaxe básica do comando `switch` é a seguinte:

```c
switch (<variável>) {
    case valor1:
        // Código a ser executado
        break;
    case valor2:
        // Código a ser executado
        break;
    // ...
    case valorN:
        // Código a ser executado
        break;
    default:
        // Código a ser executado
}
```

A `<variável>` é comparada com cada valor definido nos comandos `case`. Se houver uma correspondência, o bloco de código associado será executado. Caso contrário, o bloco dentro do comando `default` será executado. O comando `break` é utilizado para sair do `switch` após a execução do bloco de código correspondente.

Exemplo:

```c
int avaliacao = 2;

// Determinar o qualitativo da avaliação
switch (avaliacao) {
    case 1: printf("Ruim\n"); break;
    case 2: printf("Regular\n"); break;
    case 3: printf("Bom\n"); break;
    case 4: printf("Muito Bom\n"); break;
    case 5: printf("Ótimo\n"); break;
    default: printf("Número inválido. Digite um número de 1 a 5.\n");
}
```
