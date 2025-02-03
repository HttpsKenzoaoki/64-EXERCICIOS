#include <stdio.h>
int main() {
    int x, y, z;
    do {
        printf("Insira um numero inteiro diferente de 0 para x: ");
        scanf("%d", &x);
        printf("Insira um numero inteiro diferente de 0 para y: ");
        scanf("%d", &y);
        printf("Insira um numero inteiro diferente de 0 para z: ");
        scanf("%d", &z);

        if (x == 0 || y == 0 || z == 0) {
            printf("Um ou mais numeros inseridos sao 0. Por favor, insira os numeros novamente.\n");
        }
    } while (x == 0 || y == 0 || z == 0);
    int maior = x;
    int menor = x;
    if (y > maior) maior = y;
    if (z > maior) maior = z;
    if (y < menor) menor = y;
    if (z < menor) menor = z;
    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);
    return 0;
}

