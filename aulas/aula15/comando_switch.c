#include <stdio.h>

int main() {
    int dia = 2;

    // Caso a variável for igual a um valor faz uma coisa
    switch (dia) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda\n"); break;
        case 3: printf("Terça\n"); break;
        case 4: printf("Quarta\n"); break;
        case 5: printf("Quinta\n"); break;
        case 6: printf("Sexta\n"); break;
        case 7: printf("Sábado\n"); break;
    }    
    
    char alternativa = 'E';
    
    // Caso a variável não seja um dos valores faz o default
    switch (alternativa) {
        case 'a':
        case 'A': printf("Alternativa A selecionada\n"); break;      
        case 'b':
        case 'B': printf("Alternativa B selecionada\n"); break;
        case 'c':
        case 'C': printf("Alternativa C selecionada\n"); break;        
        case 'd':
        case 'D': printf("Alternativa D selecionada\n"); break;
        default: printf("Alternativa inválida\n"); break;
    }

    return 0;
}
