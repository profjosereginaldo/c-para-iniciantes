#include <stdio.h>

int main() {
    char caracter = 'a';
    char string[31] = "Uma cadeia de caracteres";
    int inteiro = 100;
    float flutuante = 56.48F;

    // Imprime no montior a string sem \n
    printf("Imprimindo formatado com printf()");         

    // Imprime no montor o caracter nova linha
    printf("\n");

    // Imprime no monitor o caracter a
    printf("%c\n", caracter);
    
    // Imprime no monitor a string
    printf("%s\n", string);

    // Imprime no monitor a string alinhada a direita em 30 caracteres
    printf("%30s\n", string);

    // Imprime no monitor a string alinhada a esquerda em 30 caracteres
    printf("%-30s\n", string);
    
    // Imprime no monitor o inteiro
    printf("%d\n", inteiro);

    // Imprime no monitor o inteiro alinhado a direita em 5 digitos
    printf("%5d\n", inteiro);

    // Imprime no monitor o inteiro alinhado a direita em 5 digitos e 0s a esquerda
    printf("%05d\n", inteiro);

    // Imprime no monitor o flutuante com 6 casas decimais
    printf("%f\n", flutuante);

    // Imprime no monitor o flutuante alinhado a direita com 6 digitos e 2 casas decimais
    printf("%6.2f\n", flutuante);

    // Imprime no monitor o flutuante sem casa decimal
    printf("%.f\n", flutuante);
    
    return 0;
}
