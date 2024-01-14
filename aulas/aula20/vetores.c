#include <stdio.h>

int main() {
    int vetor[5]; // um vetor com 5 inteiros

	// Os elementos do vetor são percorridos sempre a partir da posição 0
    vetor[0] = 1;	
    vetor[1] = 6;	
    vetor[2] = 3;	
    vetor[3] = 7;	
    vetor[4] = 8;	

    // Uso de repetição para percorrer os elementos do vetor
    for (int i = 0; i < 5; i++) {
        printf("%d, ", vetor[i]);
    }
    
    printf("\n");

    return 0;
}
