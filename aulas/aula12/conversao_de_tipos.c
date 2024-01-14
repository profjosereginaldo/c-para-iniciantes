#include <stdio.h>

int main() {
    char caractere = 127;
    // Conversão implícita
    int inteiro = caractere;   
    float flutuante = inteiro;
    double duplo = flutuante;

    printf("Conversão implícita\n");
    printf("o char %d convertido implicitamente para int: %d\n", caractere, inteiro);
    printf("o int %d convertido implicitamente para float: %f\n", inteiro, flutuante);
    printf("o float %f convertido implicitamente para double: %f\n\n", flutuante, duplo);

    duplo = 270.987654;
    // Conversão explícita
    flutuante = (float)duplo;  
    inteiro = (int)flutuante;
    caractere = (char)inteiro;

    printf("Conversão explícita\n");
    printf("o double %f convertido explicitamente para float: %f\n", duplo, flutuante);
    printf("o float %f convertido explicitamente para int: %d\n", flutuante, inteiro);
    printf("o int %d convertido explicitamente para char: %d\n", inteiro, caractere);

    return 0;
}
