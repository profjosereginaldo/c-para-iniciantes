#include <stdio.h>
#include <string.h>

int main() {
    // Estrutura para representar um endereço
     struct endereco_t {
        char logradouro[31];
        int numero;
        unsigned long int cep;
        char uf[3];
    };

    // Vetor com 5 elementos do tipo endereco_t
    struct endereco_t enderecos[5];

    strcpy(enderecos[0].logradouro, "SETOR");
    enderecos[0].numero = 100;
    enderecos[0].cep = 70000000UL;
    strcpy(enderecos[0].uf, "DF");

    strcpy(enderecos[1].logradouro, "QUADRA");
    enderecos[1].numero = 200;
    enderecos[1].cep = 70000000UL;
    strcpy(enderecos[1].uf, "DF");

    // Uso de repetição para percorrer os elementos do vetor
    for (int i = 0; i < 2; i++) {
        printf("endereço: %s, %d - %lu / %s\n", enderecos[i].logradouro, 
        	enderecos[i].numero, enderecos[i].cep, enderecos[i].uf);
    }

    return 0;
}
