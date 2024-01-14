# Saída pela Console no C

A saida de dados na console no C é realizada através de funções da biblioteca `stdio.h`. Essas funções possibilitam que o programa apresente dados ao usuário, sendo a principal delas a `printf()`.

### 📚 Saiba Mais!

Explore outras funções de saída da linguagem C consultando a [documentação do Tutorials Point](https://www.tutorialspoint.com/cprogramming/c_input_output.htm).

## Função printf()

A função `printf()` é usada para formatar e imprimir dados na tela com a seguinte sintaxe:

```c
printf(<string_de_controle>, ...);
```

onde `<string_de_controle>` contém os caracteres a serem exibidos e os especificadores de formato que controlam a formatação dos dados.

### Especificadores de Formato

Os principais especificadores de formato utilizados na função `printf()` são:

* **%c**: exibe um caractere.
* **%s**: exibe uma string.
* **%d** ou **%i**: exibe um inteiro decimal com sinal.
* **%f**: exibe um ponto flutuante.

Exemplos:

```c
printf("%c\n", 'A');
printf("%s\n", "Uma cadeia de caracteres");
printf("%d\n", 42);
printf("%f\n", 3.14F);
```

### Tamanho da Saída, Precisão e Alinhamento

É possível definir o tamanho da saída, a precisão (em casos de ponto flutuante) e o alinhamento do texto diretamente no especificador de formato.

Para determinar o tamanho da saída, basta inserir um número entre % e a letra do especificador de formato. A função `printf()` preencherá com espaços em branco até atingir o tamanho estabelecido.

```c
printf("%5d\n", 42); 
```

Para controlar a precisão em números de ponto flutuante, adicione, após o tamanho da saída, um ponto `.` seguido pelo número de casas decimais desejadas.

```c
printf("%.2f\n", 3.14159);
```

Por padrão, a função `printf()` exibe os dados sempre alinhados à direita. Para alterar o alinhamento para a esquerda, basta adicionar um sinal negativo ao tamanho da saída.

```c
printf("%-30s\n", "Uma cadeia de caracteres");
```
