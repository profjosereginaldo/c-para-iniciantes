#include <stdio.h>

int main() {
    // Para ir de 0 a 9 com salto de 1 faça algo
    for (int i = 0; i < 10; i++) {
        printf("%d, ", i);
    }

    printf("\n");

    // Para ir de 0 a 9 com salto de 2 faça algo
    for (int i = 0; i < 10; i += 2) {
        printf("%d, ", i);
    }

    printf("\n");

    // Para ir de 10 a 1 com salto de -1 faça algo
    for (int i = 10; i > 0; i--) {
        printf("%d, ", i);
    }

    printf("\n");

    // Repetição dento de outra repetição
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("(%d,%d), ", i, j);
        }
    }

    printf("\n");

    return 0;
}
