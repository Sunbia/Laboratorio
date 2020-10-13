#include <iostream>
#include "genprimos.h"
int main(int argc, const char **argv)
{
    int num;
    std::cout << "Ingrese la cantidad maxima de primos a evaluar: ";
    std::cin >> num;
    Criba(num);

    return 0;
}