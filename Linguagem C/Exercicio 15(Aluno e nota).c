#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media, rec;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 7) {
        printf("O aluno foi aprovado com nota: %.2f\n", media);
    } else {
        printf("Digite a nota de recuperação: ");
        scanf("%f", &rec);
        media = (media + rec) / 2;
        if (media >= 7) {
            printf("O aluno foi aprovado na recuperação com nota de: %.2f\n", media);
        } else {
            printf("O aluno foi reprovado com nota de: %.2f\n", media);
        }
    }
    return 0;
}
