#include <stdio.h>
int main()
{
    int x, m;
    float mi;
    printf("Digite a quantidade minima: ");
    scanf("%d", &x);

    printf("Digite a quantidade máxima: ");
    scanf("%d", &m);

    mi = (x + m) / 2.0;
    printf("O estoque medio foi %.2f\n", mi);

    return 0;


}