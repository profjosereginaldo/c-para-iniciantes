#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    // Operador adição
    printf("x + y = %d\n", x + y);

    // Operador subtração
    printf("x - y = %d\n", x - y);

    // Operador multiplicação
    printf("x * y = %d\n", x * y);

    // Operador divisão
    printf("x / y = %d\n", x / y);  // Inteiro divido por inteiro é inteiro!
    printf("x * 1.0 / y = %f\n", x * 1.0 / y);

    // Operador módulo
    printf("x %% y = %d\n", x % y);

    // Operadores de incremento e decremento
    printf("x++ => %d\n", x++); // usa o valor de x, depois incrementa
    printf("++x => %d\n", ++x); // incrementa x, depois usa o valor de x
    printf("x-- => %d\n", x--); // usa o valor de x, depois decrementa
    printf("--x => %d\n", --x); // decrementa x, depois usa o valor de x

    return 0;
}
