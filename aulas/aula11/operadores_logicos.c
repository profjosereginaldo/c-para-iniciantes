#include <stdio.h>

int main() {
    int p = 0; // Falso
    int q = 1; // Verdadeiro

    // Operador E
    printf("p && q = %d\n", p && q); // falso E qualquer coisa é falso

    // Operador OU
    printf("p || q = %d\n", p || q); // verdadeiro OU qualquer coisa é verdadeiro

    // Operador NÃO
    printf("!p = %d\n", !p); // inverte o valor lógico
    printf("!(p && q) = %d\n", !(p && q));
    printf("!(p || q) = %d\n", !(p || q));

    return 0;
}
