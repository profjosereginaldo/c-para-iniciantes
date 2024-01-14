#include <stdio.h>

int main() {
    char string[14]; // String com 13 caracteres mais um caracter \0 no final

    // Os elementos da string são percorridos sempre a partir da posição 0
    string[0] = 'E';
    string[1] = 'u';
    string[2] = ' ';
    string[3] = 'g';
    string[4] = 'o';
    string[5] = 's';
    string[6] = 't';
    string[7] = 'o';
    string[8] = ' ';
    string[9] = 'd';
    string[10] = 'e';
    string[11] = ' ';
    string[12] = 'C';
    string[13] = '\0';

    printf("%s\n", string);

    return 0;
}
