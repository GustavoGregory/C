#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{
    // imprime cabeçalho do nosso jogo
    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhacao *\n");
    printf("*****************************************\n");

    int numeroSecreto = 42;

    int chute;
    int tentativas = 1;

    while (1)
    {
        printf("Tentativa %d\n", tentativas);
        printf("Qual eh o seu chute ? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0)
        {
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if (chute < 0)
        {
            printf("Voce nao pode chutar numeros negativos!\n");
        }
        else if (acertou)
        {
            printf("Parabens! Voce acertou!\n");

            break;
        }
        else if (maior)
        {
            printf("Seu chute foi maior que o numero secreto\n");
        }
        else
        {
            printf("Seu chute foi menor que o numero secreto\n");
        }
        tentativas++;
    }
    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas\n", tentativas);
    system("pause");
    return 0;
}