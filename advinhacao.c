#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{
    // imprime cabeçalho do nosso jogo
    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhacao *\n");
    printf("*****************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;
    int chute;
    int tentativas = 1;
    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n");
    printf("Escolha:");
    scanf("%d", &nivel);

    double pontos = 1000;

    int numeroDeTentativas;

    switch (nivel)
    {
    case 1:
        numeroDeTentativas = 20;
        break;

    case 2:
        numeroDeTentativas = 15;
        break;

    default:
        numeroDeTentativas = 6;
        break;
    }

    for (int i = 1; i <= numeroDeTentativas; i++)
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

        acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if (chute < 0)
        {
            printf("Voce nao pode chutar numeros negativos!\n");
        }
        else if (acertou)
        {
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

        double pontosPerdidos = abs(chute - numeroSecreto) / 2.0;
        pontos = pontos - pontosPerdidos;
    }
    if (acertou)
    {
        printf("Parabens voce venceu!\n");
        printf("Voce acertou em %d tentativas\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    }
    else
    {
        printf("Voce perdeu tente novamente!\n");
    }

    printf("Fim de jogo!\n");

    // system("pause");
    return 0;
}