#include <stdio.h>
int main(){
    float c, f; 
    printf("Digite a temperatura em fahrenheit:");
    scanf("%f", &f);

    c =(f-32)*5 /9;
    printf("A temperatura em ceusius é: %f", c);
    return 0;
}