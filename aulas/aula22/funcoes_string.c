#include <stdio.h>
#include <string.h> // Fornece funções para manipulação de strings

int main() {
    char s1[81];
    char s2[81];

    // Copia uma string em outra
    strcpy(s1, "Uma cadeia de caracteres");
    printf("O conteudo de s1: %s\n", s1);
 
    // Calcula o tamanho da string
    printf("O tamanho de s1: %ld\n", strlen(s1));

    // Compara duas strings: 0 são iguais; < 0 s1 é menor que s2; > 0 s1 é maior que s2
    strcpy(s2, s1);
    printf("As strings são iguais? %d\n", strcmp(s1, s2));

    // Concatena duas strings
    strcat(s1, s2);
    printf("s1 concatenado com s2 %s\n", s1);

    return 0;
}
