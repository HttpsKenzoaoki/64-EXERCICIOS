#include <stdio.h>
int main(){
    float num1,num2;
    printf("Digite o Primeiro numero");
    scanf("%f", &num1);

    printf("Digite o segundo numero");
    scanf("%f", &num2);

 if (num1 > num2) {
        printf("O maior numero e: %f\n", num1);
        printf("O menor numero e: %f\n", num2);
    } else if (num2 > num1) {
        printf("O maior numero e: %f\n", num2);
        printf("O menor numero e: %f\n", num1);
    } else {
        printf("Os dois numeros sao iguais e o valor é: %f\n", num1);
    }

    return 0;
    }