#include <locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL, "");
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("O numero � positivo");
    }
    else if (num < 0)
    {
        printf("O numero � negativo");
    }
    if (num == 0)
        {
       printf("O numero nao � negativo e nem positivo, o numero �: %d\n", num);
    }
    
    return 0;
    
}