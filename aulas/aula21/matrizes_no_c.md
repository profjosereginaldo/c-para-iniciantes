# Matrizes no C

As matrizes no C são estruturas de dados com mais de uma dimensão, permitindo o armazenamento organizado de elementos em linhas e colunas. 

# Declaração de Matrizes

Em C, a declaração de uma `matriz` segue a seguinte sintaxe:

```c
<tipo> <nome_da_variável>[linhas][colunas];
```

Essa declaração é semelhante à de um [vetor](../aula20/vetores_no_c.md), sendo diferenciada por conter mais dimensões entre colchetes `[]`.

Exemplo:

```c
int matriz[3][4]; // Declara uma matriz de inteiros com 3 linhas e 4 colunas
```

## Acesso aos Elementos

Os elementos de uma matriz são acessados por meio de um par de índices `linha` e `coluna`. O acesso é feito da seguinte forma:

```c
<nome_da_varíavel>[linha][coluna];
```

onde linha é um valor dentre `0` e `linhas - 1`, e coluna um valor entre `0` e `colunas - 1`.

Exemplo:

```c
float notas[5][3];
notas[0][0] = 4.6F;
notas[0][1] = 2.9F;
notas[0][2] = 6.7F;
```

## Inicialização de Matrizes

As matrizes podem ser inicializadas durante a declaração com um conjunto de valores definidos entre chave `{}`.

```c
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```
