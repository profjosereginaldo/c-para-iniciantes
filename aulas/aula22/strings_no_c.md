# Strings no C

Strings são sequências de caracteres que representam texto. Diferentemente de outras linguagens, uma string no C é tratada como um [vetor](../aula20/vetores_no_c.md) de caracteres terminado por um caractere nulo `'\0'`.

## Declaração de Strings

A declaração de uma `string` em C segue a seguinte sintaxe:

```c
char <nome_da_variável>[tamanho + 1];
```

### ⚠️ Importante

O tamanho da string precisa ser acrescido de **1** para garantir espaço para armazenar o caractere nulo.

Exemplo:
```c
char nome[61];
char uf[3];
```

## Manipulação de Strings

A manipulação de strings é frequentemente realizada por meio de funções da biblioteca padrão <string.h>. As funções mais utilizadas são:

### Função strlen()

A função `strlen()` calcula o tamanho da string, ou seja, a quantidade de caracteres armazenados nela, desconsiderando o caracter nulo.

```c
char string[31] = "Olá Mundo";

strlen(string1); // Retorna 9
```

### Função strcpy()

A função `strcpy()` copia todo o conteúdo de uma string para outra, permitindo atribuir um valor para a string.

```c
char string[31];

strcpy(string, "Olá Mundo"); // A string agora é "Olá Mundo"
```

### Função strcat()

A função `strcat()` é utilizada para concatenar strings, onde o contéudo de uma string é acrescida ao final da outra.

```c
char string1[31] = "Olá";
char string2[31] = "Mundo";

strcat(string1, " ");   // A string1 agora é "Olá "
strcat(string1, string2);  // A string1 agora é "Olá Mundo"
```

### Função strcmp()

A função `strcmp()` faz comparação de strings, retornando zero se as strings são iguais.

```c
char string1[] = "Olá";
char string2[] = "Mundo";

strcmp(string1, string2) // Retorna diferente de Zero
```

### 📚 Saiba Mais!

Explore outras funções de manipulação de string em C consultando a [documentação do Tutorials Point](https://www.tutorialspoint.com/c_standard_library/string_h.htm).
