#include <stdio.h>
int main(){
char nome[100];
float preco, comi;
int codigo, quantidade;

printf("Nome do vendedor:");
scanf("%s", &nome);

printf("Digite o codigo da peça:");
scanf("%d", &codigo);

printf("Digite o preço unitario da peça");
scanf("%f", &preco);

printf("Digite a quantidade de peças:");
scanf("%d", &quantidade);

comi = (preco*quantidade)*0.05;

printf("\nInformações de Vendas:\n");

    printf("Vendedor: %s\n", nome);
    
    printf("Código da Peça: %d\n", codigo);
    printf("Quantidade Vendida:")
    printf("Comissão (5%%): R$ %.2f\n", comi);

    return 0;


}