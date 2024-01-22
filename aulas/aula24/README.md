# Enumerações no C

As enumerações no C permitem representar um conjunto específico de valores que estão relacionados de forma lógica, sendo utilizadas para criar variáveis cujos valores são restritos a esse conjunto.

## Declaração de Enumerações

Em C, a declaração de uma `enumeração` segue a seguinte sintaxe:

```c
enum <nome_da_enumeração> {
    <nome_da_constante1>,
    <nome_da_constante2>,
    // ...
    <nome_da_constanteN>
};
```

Cada `<nome_da_constante>` representa um valor de uma enumeração. 

Exemplo:

```c
enum status_e {
    inativo, // Igual a 0
    ativo    // Igual a 1
};
```

## Atribuição de Valores

Os valores de uma enumeração são atribuídos automaticamente, sendo a primeira constante igual a `0` e as demais incrementadas de `1`. No entanto, é possível atribuir um valor específico para cada constante.

```c
enum dias_da_semana_e {
    domingo = 1,  
    segunda, // Igual a 2
    terca,   // Igual a 3
    quarta,  // Igual a 4
    quinta,  // Igual a 5
    sexta,   // Igual a 6
    sabado   // Igual a 7
};
```
