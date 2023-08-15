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
    void to_string()
    {
        printf("(%f,%f)", real, imag);
    }
};

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
    complexo1.to_string();
    printf("\nModulo: %f\n", complexo1.modulo());
    printf("\nAngulo: %f\n", complexo1.angulo());
    printf("\n");
    complexo2.to_string();
    printf("\nModulo: %f\n", complexo2.modulo());
    printf("\nAngulo: %f\n", complexo2.angulo());
    return 0;
}