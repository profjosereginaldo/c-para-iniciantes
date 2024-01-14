# Constantes no C

As constantes no C são valores fixos que não podem ser alterados durante a execução do programa.

## Declaração de Constantes

Em C, a declaração de constantes pode ser feita de duas maneiras:

```c
#define <nome_da_constante> <valor>
```

ou

```c
<tipo> const <nome_da_constante> = <valor>;
```

A diretiva `#define` cria constantes simbólicas antes da compilação, as quais são substituídas no código fonte pelos seus valores pelo pré-processador. Já o modificador `const` é utilizado para criar constantes durante a execução do programa, a partir de variáveis.

### Regras para Nomes de Constantes
* Seguem as mesmas regras aplicadas a nomes de variáveis.
* É recomendável que o nome seja escrito em MAIÚSCULO e sem acentuação para melhor distinguir constantes de variáveis comuns.

Exemplos:

```c
#define PI 3.14159265
const int TAMANHO_MAXIMO = 100;
```

## Constantes Literais

As constantes literais representam valores inseridos no código e podem ser expressas de várias maneiras para os diferentes tipos básicos do C.

### Caracteres

Para o tipo `char`, as constantes literais devem ser expressas entre aspas simples `''`. No caso de caracteres de escape, utiliza-se a barra invertida `\` no início. 

```c
char letra = 'A';
char nova_linha = '\n';
char aspa_simples = '\'';
```

### Strings

Para representar uma string ou sequência de caracteres, as constantes literais devem ser expressas entre aspas duplas `""`.

```c
char string[31] = "isso é uma string";
char string_concatenada[31] = "isso é "
                 "uma "
                 "string";
char string_com_escape[31] = "isso é \
uma string";
```

### Inteiros

Para o tipo `int`, as constantes literais podem ser expressas na notação decimal, octal (prefixo **0**) ou hexadecimal (prefixo **0x**). O sufixo **U** pode ser utilizado para indicar que se trata de um inteiro sem sinal, enquanto o sufixo **L** pode ser utilizado para indicar que é um inteiro longo.

```c
int decimal = 10;
int octal = 010;
int hexadecimal = 0x10;
unsigned int inteiro_sem_sinal = 100U;
long int inteiro_longo = 100L;
```

### Ponto Flutuante

Para o tipo `float`, as constantes literais têm o sufixo **F** acrescido no final para diferenciá-los dos valores do tipo `double`. Adicionalmente, o sufixo **E** pode ser utilizado para representar um ponto flutuante na notação em potência de 10.

```c
float flutuante = 15.75F;
double duplo = 15.75;
float potencia_positiva = 1.575E1F;
double potencia_negativa = 1575E-2;
long double duplo_longo = 15.75L;
```
