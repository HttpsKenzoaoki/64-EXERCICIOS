#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    int num, a, b;
    printf("Digite um numero");
    scanf("%d", &num);

    if (num > 0)
    {
      a = num;
      printf("O numero � positivo e foi armazenado na variavel A");
    }
    else if (num < 0)
    {
       b = num;
       printf("O numero � negativo e foi armazenado na variavel B");
    }
    if (num == 0)
    {
        printf("Numero invalido, pois 0 nao � negativo e nem positivo");
    }
    return 0;
    
}