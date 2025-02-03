//Wiliam Kenzo Aoki Da Silva 1-AMS
#include <stdio.h>
#include <time.h>
#include <string.h>
int main() {
    char palavras[10][11];
    int i, numerosort, tentativas = 5;
    char tentativa[11];
    
    for (i = 0; i < 10; i++) {
        printf("Digite uma palavra %d: ", i + 1);
        scanf("%10s", palavras[i]);
    }
    srand(time(NULL));
    int n = rand() % 11; 
    printf("Tente adivinhar a palavra sorteada:\n");
    while (tentativas > 0) {
        scanf("%10s", tentativa);
        if (strcmp(tentativa, palavras[n]) == 0) {
            printf("Parabéns! Você adivinhou a palavra.\n");
            break;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Errou! Tente novamente.\n");
            } else {
                printf("Você perdeu! A palavra era %s\n", palavras[n]);
            }
        }
    }
    return 0;
}
