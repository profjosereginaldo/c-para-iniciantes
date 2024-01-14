# Estrutura Básica de um Programa em C

Qualquer programa em C segue uma estrutura básica que carinhosamente chamo de *Oração do Dennis Ritchie*.

```c
#include <stdio.h>

int main() {
    // Seu código aqui

    return 0;
}
```
🙏 Amém!

## Inclusão de Bibliotecas

A diretiva `#include` é utilizada para incorporar bibliotecas da linguagem C, que contêm funções e recursos essenciais para a execução do programa. No exemplo, a biblioteca padrão `stdio.h` é incluída para fornecer funcionalidades de entrada e saída de dados.

### 📚 Saiba Mais!

Explore outras bibliotecas da linguagem C consultando a [documentação do Tutorials Point](https://www.tutorialspoint.com/c_standard_library/index.htm).

## Função Principal

Em C, todo programa deve incluir uma função principal denominada `main()`, que atua como ponto de entrada e saída da execução. O tipo de retorno `int` indica que a função retorna um valor inteiro, sendo que o valor `0` sinaliza uma execução bem-sucedida.

Dentro da função principal, inserimos o código específico do programa, composto por instruções separadas por ponto e vírgula `;`. Essas instruções são agrupadas em blocos delimitados por chaves `{}`.

### 💡 Dica

Utilize a tecla de atalho `CTRL+C` para interromper a execução de um programa no Replit.
