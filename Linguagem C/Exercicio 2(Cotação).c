#include <stdio.h>
int main()
{

float cota, dol, rei;
printf("Digite a cotacao atual do dolar (em reais):");
scanf("%f", &cota);

printf("Digite o valor em Dolar:");
scanf("%f", &dol);

rei = cota*dol;

printf("O valor em reais é %.2f/n", rei);
return 0; 
}
