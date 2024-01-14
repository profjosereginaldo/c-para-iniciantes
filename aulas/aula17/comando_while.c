#include <stdio.h>

int main() {
    // Enquanto a condição for verdadeira faça algo
    int i = 0;
    while (i < 10) {
        printf("%d, ", i);
        i++;
    }

    printf("\n");

    char ch = getchar();
    // Pode ter zero repetições
    while (ch != '\n') {
        getchar(); // captura ENTER da leitura anterior
        ch = getchar();
    }

    printf("\n");

    // Repetição dento de outra repetição
    i = 0;
    while (i < 10) {
        int j = 0;
        while (j < 10) {
            printf("(%d,%d), ", i, j);
            j++;
        }
        i++;
    }

    printf("\n");

    return 0;
}
