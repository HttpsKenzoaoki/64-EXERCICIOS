#include <stdio.h>
int main(){
    float num1, num2;
    printf("Digite um numero");
    scanf("%f", &num1);

    printf("Digite outro numero");
    scanf("%f", &num2);
    int diferenca = num1 > num2 ? num1 - num2 : num2 - num1;

    printf("A diferença entre o maior e o menor é: %d\n", diferenca);

    return 0;
}