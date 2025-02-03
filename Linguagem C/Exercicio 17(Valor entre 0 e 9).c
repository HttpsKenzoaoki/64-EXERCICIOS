#include <stdio.h>
int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero >= 0 && numero <= 9) {
        printf("Valor valido\n");
    } else {
        printf("Valor invalido \n");
    }
    return 0;
}
