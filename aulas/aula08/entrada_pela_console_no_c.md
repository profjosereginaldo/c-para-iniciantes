# Entrada pela Console no C

A entrada de dados pela console no C é realizada por funções da biblioteca `stdio.h`. Essas funções possibilitam que o programa receba dados diretamente do usuário, sendo a principal delas a `scanf()`.

### 📚 Saiba Mais!

Explore outras funções de entrada da linguagem C consultando a [documentação do Tutorials Point](https://www.tutorialspoint.com/cprogramming/c_input_output.htm).

## Função scanf()

A função scanf() é utilizada para ler dados da console e atribuir esses valores a variáveis específicas no programa. A sintaxe é:

```c
scanf(<string_de_controle>, ...);
```

onde `<string_de_controle>` contém os especificadores de formato que controlam a formatação dos dados.

### ⚠️ Importante

Para a função `scanf()` armazenar um valor lido em uma variável em C, é essencial utilizar o operador `&` para obter o endereço de memória da variável.

### Especificadores de Formato

Os principais especificadores de formato utilizados na função `scanf()` são:

* **%c**: lê um caractere.
* **%s**: lê uma string até char um espaço em branco.
* **%d** ou **%i**: lê um inteiro decimal com sinal.
* **%f**: lê um ponto flutuante.

Exemplos:

```c
char caractere;
scanf("%c", &caractere);

char string[31];
scanf("%s", string); // Para ler string não precisa de &

int inteiro;
scanf("%d", &inteiro);

float flutuante;
scanf("%f", &flutuante);
```

### Tratamento de Entrada

Quando o usuário insere um valor, este é temporariamente armazenado em um **buffer**. A função `scanf()` captura esse valor até encontrar um espaço em branco ou a tecla ENTER.

Se o valor estiver no formato correto, ele é atribuído à variável correspondente. Caso contrário, a função função `scanf()` retorna 0, indicando uma entrada inválida.

Para evitar problemas relacionados a entradas indesejadas, é aconselhável limpar o buffer antes de iniciar a próxima leitura. Isso pode ser feito utilizando a função `getchar()` da seguinte maneira:

```c
while (getchar() != '\n');
```