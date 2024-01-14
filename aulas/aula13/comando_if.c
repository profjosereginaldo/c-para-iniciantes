#include <stdio.h>

int main() {
    int idade = 32;

	// Se a condição for verdadeira então faz uma coisa
    if (idade > 17) {
        printf("Você é maior de idade!\n");
    }    
        
    idade = 15;

    // Se a condição for verdadeira então faz uma coisa, senão faz outra coisa
    if (idade > 17) {
        printf("Você é maior de idade!\n");
    } else {
    	printf("Você é menor de idade!\n");
    }

    idade = 60;

	// Se a condição for verdadeira então faz uma coisa, senão se a próxima
    // condição for verdadeira faz outra coisa, senão faz outra coisa
    if (idade < 19) {
    	printf("Você é um jovem!\n");
    } else if (idade < 59) { 
        printf("Você é um adulto!\n");
	} else {
		printf("Você é um idoso!\n");
	}

    return 0;
}
