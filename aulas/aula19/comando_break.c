#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) break; // Interrompe na 6ª iteração
        printf("%d, ", i);        
    }
    
    printf("\n");    
    
    return 0;
}
