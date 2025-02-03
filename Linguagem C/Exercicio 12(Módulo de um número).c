#include <stdio.h>
int main() {
    float num1;
    printf("Digite um número: ");
    scanf("%f", &num1);

    if (num1 >= 0) {
        printf("O módulo desse número é: %.2f\n", num1);
    } else {
        printf("O módulo desse número é: %.2f\n", num1 * (-1));
    }

    return 0;
}
