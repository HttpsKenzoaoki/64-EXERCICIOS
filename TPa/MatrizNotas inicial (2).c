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
    char pesquisa[40];
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

    // C�lculo da m�dia
    for (L = 0; L < 4; L++)
    {
        media[L] = (notas[L][0] + notas[L][1] + notas[L][2]) / 3;
    }

    // C�lculo da m�dia vers�o 2
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
        puts("2 - Alunos aprovados (m�dia 7.0)");
        puts("3 - Alunos reprovados");
        puts("4 - Pesquisar boletim por nome");
        puts("5 - Quantidade de alunos aprovados e reprovados");
        puts("6 - Maior nota de cada aluno");
        puts("0 - Sair");
        printf("Digite uma op��o: ");
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
                char Buscar[40];
                int encontrado = 0;
                printf("Digite o nome do aluno para pesquisar: ");
                fflush(stdin);
                gets(Buscar);

                for (L = 0; L < 4; L++)
            {
            if (strcmp(Buscar, nomes[L]) == 0)
            {
                printf("Aluno: %s\n", nomes[L]);
                printf("Notas: %.1f, %.1f, %.1f\n", notas[L][0], notas[L][1], notas[L][2]);
                printf("Média: %.1f\n", media[L]);
                encontrado = 1;
                break; 
            }
            }
            }
        break;

        case 5:
            {
            int aprovados = 0, reprovados = 0;
            for (L = 0; L < 4; L++) {
                if (media[L] >= 7.0) {
                    aprovados++;
                } else {
                    reprovados++;
                }
            }
            printf("Quantidade de alunos aprovados: %d\n", aprovados);
            printf("Quantidade de alunos reprovados: %d\n", reprovados);
        }
            break;

        case 6:{
            printf("Maior nota de cada aluno:\n");
            for (L = 0; L < 4; L++) {
                float maiorNota = notas[L][0];
                for (C = 1; C < 3; C++) {
                    if (notas[L][C] > maiorNota) {
                        maiorNota = notas[L][C];
                    }
                }
                printf("Aluno: %s - Maior Nota: %.1f\n", nomes[L], maiorNota);}
            break;

        case 0:
            break;

        default:
            break;
        }

    } while (op != 0);

    return 0;
}