#include <stdio.h>
int main(){
    float a, r, v;
    printf("Digite a altura da lata");
    scanf("%f", &a);
    printf("Digite o raio da lata:");
    scanf("%f", &r);
    v = 3.14159*r*r*a;
    printf("O volume dessa lata de oléo é: %f\n", v);
    return 0;
}