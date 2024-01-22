# Variáveis no C

As variáveis no C são espaços de armazenamento na memória que guardam valores específicos de um determinado tipo de dado.

## Declaração de Variáveis

A declaração de variáveis em C segue o formato:

```c
<tipo> <nome_da_variavel>;
```

### Regras para Nomes de Variáveis
* O nome de uma variável deve começar com uma letra ou sublinhado.
* Pode conter letras, números e sublinhados.
* Distingue maiúsculas de minúsculas (nome e Nome são diferentes). É recomendável que o nome seja escrito em minusculo e sem acentuação.
* Não pode ser uma palavra reservada do C.

```c
/*
  - auto      - double    - int       - struct
  - break     - else      - long      - switch
  - case      - enum      - register  - typedef
  - char      - extern    - return    - union
  - const     - float     - short     - unsigned
  - continue  - for       - signed    - void
  - default   - goto      - sizeof    - volatile
  - do        - if        - static    - while 
*/
```

Exemplos:

```c
int idade;
float valor_produto;
char opcao1;
```

## Inicialização de Variáveis

As variáveis podem ser inicializadas durante a declaração ou em um momento posterior, utilizando o operador de atribuição `=`.

```c
int numero = 42;  // Inicialização no momento da declaração
double salario;

salario = 2500.50; // Inicialização posterior a declaração
```

## Escopo de Variáveis

O escopo de uma variável define onde ela pode ser acessada no código fonte, havendo dois tipos: global e local. Variáveis globais estão disponíveis em todo o programa, ao passo que as locais são restritas a blocos específicos.

```c
#include <stdio.h>

int variavel_global = 20;

int main() {
    int variavel_local = 10;
    
    return 0;
}
```

Neste exemplo, `variavel_global` é acessível em todo o programa, enquanto `variavel_local` é acessível apenas dentro da função `main()`.