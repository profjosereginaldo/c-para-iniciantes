#include <stdio.h>

// Nomes de constantes na convenção ANSI C
#define SEXO_MASCULINO 1
#define _PHI_ 1.618
#define MSG_ERRO "Este programa executou uma operação ilegal."
const int SEXO_FEMININO = 2;
const float PI = 3.14159F;
const char SAUDACAO[31] = "Olá Pessoal!";

// Má pratica de programação
#define x 1
const int limite = 10;

// Nomes de constantes inválidos
// #define 1CONSTANTE 1
// #define @CONSTANTE 1;

int main() {    
    // Não é possível alterar o valor de uma constante
    // PI = 3.14; 

    return 0;
}
