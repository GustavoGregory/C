//------------------------------------------------------------------------------------------------
//------------------------------------BIBLIOTECAS-------------------------------------------------
//------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

//------------------------------------------------------------------------------------------------
//-------------------------------------VARIÁVEIS--------------------------------------------------
//------------------------------------------------------------------------------------------------

class Conta
{
    char cliente[30];
    int numeroConta;
    float saldo;

public:
    void inicializaConta(char *nome, int numero, float saldo)
    {
        strcpy((*this).cliente, nome);
        (*this).numeroConta = numero;
        (*this).saldo = saldo;
    }

    void imprimeConta()
    {
        printf("\nConta %d:\n", numeroConta);
        printf("\n-Cliente: %s\n", cliente);
        printf("\n-Saldo: %.2f\n", saldo);
    }

    void debitarConta(float valor)
    {
        saldo -= valor;
    }

    void creditarConta(float valor)
    {
        saldo += valor;
    }
};

//------------------------------------------------------------------------------------------------
//---------------------------------------FUNÇÕES--------------------------------------------------
//------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------
//---------------------------------FUNÇÃO MAIN----------------------------------------------------
//------------------------------------------------------------------------------------------------

int main()
{

    Conta Conta1;
    Conta Conta2;

    // inicializa função do objeto nomeando cada item
    Conta1.inicializaConta("Gustavo Gregory", 12345, 300.00);
    Conta2.inicializaConta("Cesar Gregory", 54321, 300.00);

    // imprime contas

    printf("\n---------------------------------\n");
    Conta1.imprimeConta();
    printf("\n---------------------------------\n");
    Conta2.imprimeConta();

    printf("\n---------------------------------\n");
    printf("\nDebitar 500 da conta 1           \n");
    printf("\nCreditar 50 na conta 2           \n");
    printf("\n---------------------------------\n");

    Conta1.debitarConta(500.00);
    Conta2.creditarConta(50.00);

    printf("\n---------------------------------\n");
    Conta1.imprimeConta();
    printf("\n---------------------------------\n");
    Conta2.imprimeConta();

    return 0;
}