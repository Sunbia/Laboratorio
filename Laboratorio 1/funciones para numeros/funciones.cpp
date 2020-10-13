#include "funciones.h"

bool ParImpar(int numero)
{
    if (numero % 2 == 0)
        return true;
    else
        return false;
}

bool Primo(int numero)
{
    if (numero <= 1)
    {
        return false;
    }
    // Si los valores entre 2 y n-1 son divisores de n, entonces no es primo.
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool Signed(float numero)
{
    return (numero > 0) ? true : false;
}

bool Integer(float numero)
{
    float parte_decimal = (int)numero - numero;
    return (parte_decimal == 0) ? true : false;
}