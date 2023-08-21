//------------------------------------------------------------------------------------------------
//------------------------------------BIBLIOTECAS-------------------------------------------------
//------------------------------------------------------------------------------------------------

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

//------------------------------------------------------------------------------------------------
//-------------------------------------VARIÁVEIS--------------------------------------------------
//------------------------------------------------------------------------------------------------

class Complexo
{
    float real;
    float imag;

public:
    void inicializa(float real, float imag)
    {
        (*this).real = real;
        (*this).imag = imag;
    }
    float obtem_real()
    {
        return real;
    }
    float obtem_imag()
    {
        return imag;
    }
    void atribui_real(float real)
    {
        (*this).real = real;
    }
    void atribui_imag(float imag)
    {
        (*this).imag = imag;
    }
    float modulo()
    {
        return (sqrt(real * real + imag * imag));
    }
    float angulo()
    {
        return (180 * atan2(imag, real) / 3.1415926535);
    }
    void imprime()
    {
        printf("(%f,%f)", real, imag);
    }
};

Complexo soma_complexos(Complexo complexo1, Complexo complexo2)
{
    Complexo resultado;
    resultado.atribui_real(complexo1.obtem_real() + complexo2.obtem_real());
    resultado.atribui_imag(complexo1.obtem_imag() + complexo2.obtem_imag());
    return resultado;
}

Complexo subtrai_complexos(Complexo complexo1, Complexo complexo2)
{
    Complexo resultado;
    resultado.atribui_real(complexo1.obtem_real() - complexo2.obtem_real());
    resultado.atribui_imag(complexo1.obtem_imag() - complexo2.obtem_imag());
    return resultado;
}

Complexo multiplica_complexos(Complexo complexo1, Complexo complexo2)
{
    Complexo resultado;
    float m1 = complexo1.modulo();
    float m2 = complexo2.modulo();

    float a1 = complexo1.angulo();
    float a2 = complexo2.angulo();

    float modulo = m1 * m2;
    float angulo = a1 + a2;

    resultado.atribui_real(complexo1.obtem_real() - complexo2.obtem_real());
    resultado.atribui_imag(complexo1.obtem_imag() - complexo2.obtem_imag());
    return resultado;
}

//------------------------------------------------------------------------------------------------
//---------------------------------------FUNÇÕES--------------------------------------------------
//------------------------------------------------------------------------------------------------

Complexo complexo1;
Complexo complexo2;

//------------------------------------------------------------------------------------------------
//---------------------------------FUNÇÃO MAIN----------------------------------------------------
//------------------------------------------------------------------------------------------------

int main()
{
    complexo1.inicializa(3, 4);
    complexo2.inicializa(6, 8);
    complexo1.imprime();
    printf("\nModulo: %f\n", complexo1.modulo());
    printf("\nAngulo: %f\n", complexo1.angulo());
    printf("\n");
    complexo2.imprime();
    printf("\nModulo: %f\n", complexo2.modulo());
    printf("\nAngulo: %f\n", complexo2.angulo());
    printf("\n");

    Complexo result_op = soma_complexos(complexo1, complexo2);
    result_op.imprime();

    printf("\n");

    result_op = subtrai_complexos(complexo1, complexo2);
    result_op.imprime();

    return 0;
}