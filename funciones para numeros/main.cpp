#include <iostream>
#include "funciones.h"
int main(int argc, const char **argv)
{
    float numero;
    std::cout << "Ingrese un numero natural o real: " << std::endl;
    std::cin >> numero;
    int int_numero = numero;
    if (Integer(numero))
    {
        std::cout << "El numero es entero:" << std::endl;
        if (ParImpar(int_numero))
        {
            std::cout << "Par" << std::endl;
        }
        else
        {
            std::cout << "Impar" << std::endl;
        }

        if (Primo(int_numero)==true)
        {
            std::cout << "Primo" << std::endl;
        }
        else
        {
            std::cout << "No primo" << std::endl;
        }
    }
    else
    {
        std::cout << "El numero es real:" << std::endl;
    }
    // Positivo o negativo
    if (Signed(numero))
    {
        std::cout << "Positivo" << std::endl;
    }
    else
    {
        std::cout << "Negativo" << std::endl;
    }
    return 0;
}