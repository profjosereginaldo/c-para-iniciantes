#include <stdio.h>

int main() {
    int idade = 32;

    // Se a condição for verdadeira então faz uma coisa, senão faz outra coisa
    idade > 17 ? printf("Você é maior de idade!\n") : printf("Você é menor de idade!\n");

    idade = 60;

	// Se a condição for verdadeira então faz uma coisa, senão testa a próxima condição
 	idade < 19 ? printf("Você é um jovem!\n") : idade < 59 ? printf("Você é um adulto!\n") : printf("Você é um idoso!\n");

    return 0;
}
