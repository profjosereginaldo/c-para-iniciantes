#include <stdio.h>

int main() {
    char caracter;
    char string[31];
    int inteiro;
    float flututante;

    // Captura um caracter do teclado até achar um espaço em branco ou pressionar a tecla ENTER
    printf("Entre com um caractere: ");
    int leu_certo = scanf("%c", &caracter);

    // Captura uma string do teclado até achar um espaço em branco ou pressionar a tecla ENTER
    printf("Entre com uma string: ");
    leu_certo = scanf("%s", string); // não precisa do operador &

    // Captura um inteiro do teclado até achar um espaço em branco ou pressionar a tecla ENTER
    printf("Entre com um inteiro: ");
    leu_certo = scanf("%d", &inteiro);

    // Captura um flutuante do teclado até achar um espaço em branco ou pressionar a tecla ENTER
    printf("Entre com um flutuante: ");
    leu_certo = scanf("%f", &flututante);

    // Limpa o buffer do teclado até achar \n
    while (getchar() != '\n'); // necessário para funcionar a leitura abaixo

    // Captura uma string do teclado até pressionar a tecla ENTER
    printf("Entre com uma string: ");
    leu_certo = scanf("%[^\n]", string);

    return 0;
}
