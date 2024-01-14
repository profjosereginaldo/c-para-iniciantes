# Vetores no C

Vetores, ou *arrays*, no C são estruturas de dados que permitem armazenar elementos do mesmo tipo de maneira sequencial.

## Declaração de Vetores

Em C, a declaração de um `vetor` segue a seguinte sintaxe:

```c
<tipo> <nome_da_variável>[tamanho];
```

Basicamente, é a declaração de uma variável acrescida de um `tamanho` entre colchetes `[]`, representando o número de elementos que o vetor pode armazenar.

Exemplo:

```c
int numeros[5]; // Declara um vetor de inteiros com tamanho 5
```

## Acesso aos Elementos

Os elementos de um vetor são acessados por meio de um índice, começando por `0` e terminando em `tamanho - 1`. O acesso aos elementos é feito da seguinte forma:

```c
<nome_da_variável>[indice]
```

Exemplo:

```c
int numeros[5];
numeros[0] = 1;
numeros[1] = 2;
```

### 💡 Dica

Utilize *loops* para percorrer todos os elementos de um vetor, respeitando os limites `0` a `tamanho - 1`.

## Inicialização de Vetores

Os vetores podem ser inicializados durante a declaração com um conjunto de valores definidos entre chave `{}`.

```c
int numeros[5] = {1, 2, 3, 4, 5}; // Inicialização durante a declaração
```
