#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("Digite o valor de D: ");
    scanf("%d", &d);

    printf("Soma de A com B: %d\n", a + b);
    printf("Soma de A com C: %d\n", a + c);
    printf("Soma de A com D: %d\n", a + d);
    printf("Soma de B com C: %d\n", b + c);
    printf("Soma de B com D: %d\n", b + d);
    printf("Soma de C com D: %d\n", c + d);

    printf("Multiplicação de A com B: %d\n", a * b);
    printf("Multiplicação de A com C: %d\n", a * c);
    printf("Multiplicação de A com D: %d\n", a * d);
    printf("Multiplicação de B com C: %d\n", b * c);
    printf("Multiplicação de B com D: %d\n", b * d);
    printf("Multiplicação de C com D: %d\n", c * d);
    return 0;
}
