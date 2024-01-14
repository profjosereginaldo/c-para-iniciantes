#include <stdio.h>
#include <limits.h> // Define valores mínimo e máximo do inteiro
#include <float.h>  // Define valores mínimo e máximo do ponto flutuante

int main() {
    // Tamanho e intervalo do tipo char
    printf("char ocupa %lu byte e aceita valores entre %d e %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);

    // Tamanho e intervalo do tipo int
    printf("int ocupa %lu bytes e aceita valores entre %d e %d\n", sizeof(int), INT_MIN, INT_MAX);

    // Tamanho e intervalo do tipo float
    printf("float ocupa %lu bytes e aceita valores entre %E e %E\n", sizeof(float), -FLT_MAX, FLT_MAX);

    // Tamanho e intervalo do tipo double
    printf("double ocupa %lu bytes e aceita valores entre %E e %E\n", sizeof(double), -DBL_MAX, DBL_MAX);

    // Tamanho do tipo void
    printf("void ocupa %lu byte\n", sizeof(void));

    return 0;
}
