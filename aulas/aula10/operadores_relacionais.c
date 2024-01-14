#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    // Operador igual a
    printf("x == y? %d\n", x == y); // 0 é falso, 1 é verdadeiro
    printf("x = y? %d\n", x = y);   // não é igualdade

    // Operador diferente de
    printf("x != y? %d\n", x != y);

    // Operador menor que
    printf("x < y? %d\n", x < y);

    // Operador maior que
    printf("x > y? %d\n", x > y);

    // Operador menor ou igual
    printf("x <= y? %d\n", x <= y);

    // Operador maior ou igual
    printf("x >= y? %d\n", x >= y);

    return 0;
}
