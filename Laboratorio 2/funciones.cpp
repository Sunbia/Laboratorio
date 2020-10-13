#include "funciones.h"
#include <iostream>

int r_fibonacci(int n)
{
    if (n == 1)
    {
        return n;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return r_fibonacci(n - 1) + r_fibonacci(n - 2);
    }
}


float r_potencia(int n, int e)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n > 0)
    {
        return n * r_potencia(n, e - 1);
    }
    else
    {
        return 1 / (n * r_potencia(n, e - 1));
    }
}

float sumarray(int array[], int size)
{

    float total = 0;
    if (size == 1)
    {
        return array[0];
    }
    else
    {
        total = array[size - 1] + sumarray(array, size - 2);
    }

    return total;
}
