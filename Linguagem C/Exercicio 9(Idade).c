#include <stdio.h>

int main() {
    int a, m, d, i;

    printf("Digite a idade em anos: ");
    scanf("%d", &a);

    printf("Digite a idade em meses: ");
    scanf("%d", &m);

    printf("Digite a idade em dias: ");
    scanf("%d", &d);
    i = (a * 365) + (m * 30) + d;

    printf("A idade expressa em dias é: %d\n", i);

    return 0;
}
