#include <stdio.h>

int main() {
    float matriz[5][2]; // uma matriz 5x2 com 10 flutuantes
    
    // Os elementos da matriz são percorridos sempre a partir da posição 0
    matriz[0][0] = 5.1;
    matriz[0][1] = 4.5;
    matriz[1][0] = 6.0;
    matriz[1][1] = 5.6;
    matriz[2][0] = 7.1;
    matriz[2][1] = 8.5;
    matriz[3][0] = 2.3;
    matriz[3][1] = 4.5;
    matriz[4][0] = 6.4;
    matriz[4][1] = 7.5;

    // Uso de repetições para percorrer os elementos da matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.1f, ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
