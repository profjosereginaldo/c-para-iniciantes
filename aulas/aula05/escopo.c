#include <stdio.h>

int global = 30; // Variável global acessível de qualquer lugar

int main() {
    int local = 10; // Variável local acessível dentro do main

    {
        int bloco = 10;  // Variável local acessível dentro do bloco
        int local = 20; // Substitui a variável local declarada no main
        printf("Valor das variáveis dentro do bloco\n");
        printf("global = %d\n", global);
        printf("local = %d\n", local);
        printf("bloco = %d\n", bloco);
    }

    printf("Valor das variáveis fora do bloco\n");
    printf("global = %d\n", global);
    printf("local = %d\n", local);
    // printf("bloco = %d\n", bloco); // Variável bloco não existe no main

    return 0;
}
