#include <stdio.h>
int main(){
    float tempo, velocidade, distancia, litros;

    printf("Digite o tempo gasto da viagem:");
    scanf("%f", &tempo);
    printf("Digite a velocidade media da viagem:");
    scanf("%f", &velocidade);
    distancia = tempo*velocidade;
    litros = distancia/12;
    printf("Informações da viagem:/n");
    printf("Tempo gasto: %.2f\n", tempo);
    printf("Velocidade média: %.2f\n", velocidade);
    printf("Distância: %.2f\n", distancia);
    printf("Litros usados: %.2f\n", litros);
    return 0;
    }