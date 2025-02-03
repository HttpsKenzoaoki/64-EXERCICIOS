#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float notas[4][3];
    char nomes[4][40];
    float media[4];
    float soma;
    int L, C, op = 0;

    // Cadastro das notas
    for (L = 0; L < 4; L++)
    {
        printf("Nome do Aluno: ");
        fflush(stdin);
        gets(nomes[L]);

        for (C = 0; C < 3; C++)
        {
            printf("Aluno: %s - %d. Nota: ", nomes[L], C + 1);
            scanf("%f", &notas[L][C]);
        }
    }

    // Cálculo da média
    for (L = 0; L < 4; L++)
    {
        media[L] = (notas[L][0] + notas[L][1] + notas[L][2]) / 3;
    }

    // Cálculo da média versão 2
    for (L = 0; L < 4; L++)
    {
        soma = 0;
        for (C = 0; C < 3; C++)
        {
            soma = soma + notas[L][C];
        }

        media[L] = soma / 3;
    }

    // Exibindo todos os dados
    for (L = 0; L < 4; L++)
    {
        printf("Aluno: %s ", nomes[L]);

        for (C = 0; C < 3; C++)
        {
            printf(" %.1f", notas[L][C]);
        }

        printf("  =  %.1f \n", media[L]);
    }


    do
    {
        printf("DADOS DOS ALUNOS \n\n");
        puts("1 - Listar os nomes dos alunos");
        puts("2 - Alunos aprovados (média 7.0)");
        puts("3 - Alunos reprovados");
        puts("4 - Pesquisar boletim por nome");
        puts("0 - Sair");
        printf("Digite uma opção: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Nomes dos alunos:\n");
            for (L = 0; L < 4; L++)
            {
                printf("%s\n", nomes[L]);
            }
        break;

        case 2:
            printf("Alunos aprovados (média >= 7.0):\n");
            for (L = 0; L < 4; L++)
            {
                if (media[L] >= 7.0)
                {
                    printf("%s - Média: %.1f\n", nomes[L], media[L]);
                }
            }
        break;

        case 3:
            printf("Alunos reprovados (média < 7.0):\n");
            for (L = 0; L < 4; L++)
            {
                if (media[L] < 7.0)
                {
                    printf("%s - Média: %.1f\n", nomes[L], media[L]);
                }
            }
        break;

        case 4:
            {
                char nomeBusca[40];
                int encontrado = 0;
                printf("Digite o nome do aluno para pesquisar: ");
                fflush(stdin);
                gets(nomeBusca);

                //código para buscar o nome

                if (encontrado==0)
                {
                    printf("Aluno não encontrado.\n");
                }
            }
        break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        break;
        }

    } while (op != 0);

    return 0;
}