#include <stdio.h>
int main(){
    int n, i;
    //Declarando o tamanho do vetor
        printf("Digite a quantidade de numeros do vetor:");
        scanf("%d", &n);
    //Declarando os numeros do vetor
    int v[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &v[i]);
    }
    //Invertendo valores e imprimindo
        printf("Valor invertido do vetor: \n");    
        for ( i = n - 1; i >= 0; i--)
        {
            printf("%d\n", v[i]);
        }
        printf("\n");
        return 0;
}