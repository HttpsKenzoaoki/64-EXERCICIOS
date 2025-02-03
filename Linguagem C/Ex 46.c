#include <stdio.h>
int main(){
    int n, i;
//tamanho dos vetores
    printf("Defina o tamanho dos vetores x e y:");
        scanf("%d", &n);
//numeros dos vetores
    int x[n], y[n];
    for ( i = 0; i < n; i++)
    {
       printf("Digite os numeros do vetor x:");
        scanf("%d", &x[i]);
    }
    for ( i = 0; i < n; i++)
    {
       printf("Digite os numeros do vetor y:");
        scanf("%d", &y[i]);
    }
//calcular o produto do valor escalar dos vetores
    int produto = 0;
    for ( i = 0; i < n; i++)
    {
        produto += x[i] * y[i];
    }
//exibir os valores
    printf("O produto escalar dos vetores é: %d\n", produto);
    return 0;
}
