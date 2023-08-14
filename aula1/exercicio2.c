//------------------------------------------------------------------------------------------------
//------------------------------------BIBLIOTECAS-------------------------------------------------
//------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//------------------------------------------------------------------------------------------------
//-------------------------------------VARIÁVEIS--------------------------------------------------
//------------------------------------------------------------------------------------------------

struct
{
    char cliente[30];
    int numeroConta;
    float saldo;
} Conta1;

struct
{
    char cliente[30];
    int numeroConta;
    float saldo;
} Conta2;

//------------------------------------------------------------------------------------------------
//---------------------------------------FUNÇÕES--------------------------------------------------
//------------------------------------------------------------------------------------------------

void imprimeConta(char *conta, int numeroConta, float saldo, int num)
{
    printf("\nConta %d:\n", num);
    printf("\n-Cliente: %s\n", conta);
    printf("\n-Numero: %d\n", numeroConta);
    printf("\n-Saldo: %.2f\n", saldo);
}

void debitarConta(float *saldo, int valor)
{
    *saldo = *saldo - valor;
}

void creditarConta(float *saldo, int valor)
{
    *saldo = *saldo + valor;
}

//------------------------------------------------------------------------------------------------
//---------------------------------FUNÇÃO MAIN----------------------------------------------------
//------------------------------------------------------------------------------------------------

int main()
{

    // Define variaveis conta 1
    strcpy(Conta1.cliente, "Gustavo Gregory");
    Conta1.numeroConta = 12345;
    Conta1.saldo = 300.00;

    // Define variaveis conta 2
    strcpy(Conta2.cliente, "Cesar Gregory");
    Conta2.numeroConta = 54321;
    Conta2.saldo = 500.00;

    printf("\n---------------------------------\n");
    imprimeConta(Conta1.cliente, Conta1.numeroConta, Conta1.saldo, 1);
    printf("\n---------------------------------\n");
    imprimeConta(Conta2.cliente, Conta2.numeroConta, Conta2.saldo, 2);

    printf("\n---------------------------------\n");
    printf("\nDebitar 500 da conta 1           \n");
    printf("\nCreditar 50 na conta 2           \n");
    printf("\n---------------------------------\n");

    debitarConta(&Conta1.saldo, 500);
    creditarConta(&Conta2.saldo, 50);

    printf("\n---------------------------------\n");
    imprimeConta(Conta1.cliente, Conta1.numeroConta, Conta1.saldo, 1);
    printf("\n---------------------------------\n");
    imprimeConta(Conta2.cliente, Conta2.numeroConta, Conta2.saldo, 2);

    return 0;
}