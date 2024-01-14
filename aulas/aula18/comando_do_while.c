#include <stdio.h>

int main() {
	// Faça algo enquanto a condição for verdadeira
    int i = 0;
    do {
        printf("%d, ", i);
        i++;
    } while (i < 10);

    printf("\n");

    char ch = getchar();
    // Tem pelo menos uma repetição
    do {
        getchar(); // captura ENTER da leitura anterior
        ch = getchar();            
    } while (ch != '\n');

    printf("\n");

    // Repetição dentro de outra repetição
    i = 0;
    do {
        int j = 0;
        do {
            printf("(%d,%d), ", i, j);
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);

    printf("\n");

    return 0;
}
