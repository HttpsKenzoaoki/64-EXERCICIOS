#include <stdio.h>
int main() {
    int codigo;
    printf("Digite um numero inteiro para o codigo: ");
    scanf("%d", &codigo);
    switch (codigo) {
        case 1:
            printf("um\n");
            break;
        case 2:
            printf("dois\n");
            break;
        case 3:
            printf("tres\n");
            break;
        default:
            printf("codigo invalido\n");
    }
    return 0;
}
