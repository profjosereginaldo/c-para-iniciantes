#include <stdio.h>
#include <string.h>

int main() {
    // Estrutura para representar um contato telefônico
    struct contato_t {
        char nome[31];
        unsigned int telefone;
    };
    
    // Variável do tipo contato_t
    struct contato_t contato;

    // Operador . acessa os campos da estrutura
    strcpy(contato.nome, "José");
    contato.telefone = 33332222U;

    printf("contato: %s - (%u)\n", contato.nome, contato.telefone);

    return 0;
}
