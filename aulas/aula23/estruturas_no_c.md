# Estruturas no C

As estruturas no C permitem agrupar diferentes tipos de dados sob um único nome, criando tipos de dados personalizados para representar entidades mais complexas.

## Declaração de Estruturas

Em C, a declaração de uma `estrutura` segue a seguinte sintaxe:

```c
struct <nome_da_estrutura> {
    <tipo> <nome_da_variável1>;
    <tipo> <nome_da_variável2>;
    // ...
    <tipo> <nome_da_variávelN>;
};
```

Cada `<nome_da_variável>` representa um campo que descreve uma entidade do mundo real.

Exemplo:

```c
struct pessoa_t {
    char nome[61];
    int idade;
    float altura;
};
```

## Acesso aos Campos

Os campos de uma estrutura são acessados por meio do operador ponto `.`.

```c
struct pessoa_t individuo;

strcpy(individuo.nome, "José");
individuo.idade = 51;
individuo.altura = 1.75;
```

## Vetores de Estruturas

É possível criar vetores de estruturas, permitindo o armazenamento de múltiplos registros do mesmo tipo em uma única variável.

```c
struct pessoa_t pessoas[3]; // Vertor com 3 pessoas
```
