#include <iostream>
#include "invert.h"


int main(int argc, const char **argv)
{

    int array[11];
    rellenar(array, 11);
    printvector(array, 11);
    invertir(array,11);
    printvector(array, 11);

    return 0;
}