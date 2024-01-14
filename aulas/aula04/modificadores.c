#include <stdio.h>
#include <limits.h> // Define valores mínimo e máximo do inteiro
#include <float.h>  // Define valores mínimo e máximo do ponto flutuante

int main() {
    // Tamanho e intervalo do tipo char, com/sem sinal
    printf("signed char ocupa %lu byte e aceita valores entre %d e %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char ocupa %lu byte e aceita valores entre %d e %u\n", sizeof(unsigned char), 0, UCHAR_MAX);
    
    // Tamanho e intervalo do tipo short int, com/sem sinal
    printf("signed short int ocupa %lu bytes e aceita valores entre %d e %d\n", sizeof(signed short int), SHRT_MIN, SHRT_MAX);
    printf("unsigned short int ocupa %lu bytes e aceita valores entre %d e %u\n", sizeof(unsigned short int), 0, USHRT_MAX);

    // Tamanho e intervalo do tipo int, com/sem sinal
    printf("signed int ocupa %lu bytes e aceita valores entre %d e %d\n", sizeof(signed int), INT_MIN, INT_MAX);
    printf("unsigned int ocupa %lu bytes e aceita valores entre %d e %u\n", sizeof(unsigned int), 0, UINT_MAX);
    
    // Tamanho e intervalo do tipo long int, com/sem sinal
    printf("signed long int ocupa %lu bytes e aceita valores entre %ld e %ld\n", sizeof(signed long int), LONG_MIN, LONG_MAX);
    printf("unsigned long int ocupa %lu bytes e aceita valores entre %d e %lu\n", sizeof(unsigned long int), 0, ULONG_MAX);

    // Tamanho e intervalo do tipo long double
    printf("long double ocupa %lu bytes e aceita valores entre %LE e %LE\n", sizeof(long double), -LDBL_MAX, LDBL_MAX);

    return 0;
}
