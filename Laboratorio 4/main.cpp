#include <iostream>
#include <cstdlib>

#include "funciones.hpp"
int main(int argc, char const *argv[])
{
   // ejercicio 1 array estatico
   int numeros[5];
   fillArray(numeros, 5, 20);
   std::cout << "mayor: " << maxvalueinarray(numeros, 5) << std::endl;

   // ejercicio 2 array dinamico
   int *numeros2 = (int *)malloc(5 * sizeof(int));
   fillArray(numeros2, 5, 20);
   printarray1(numeros2, 5); // (a)
   std::cout << std::endl
             << std::endl;
   printarray2(numeros2, 5); // (b)

   // ejercicio 3 matriz dinamica [5][5]
   int **matrizNumeros = (int **)malloc(5 * sizeof(int *));
   for (int i = 0; i < 5; i++)
   {
      *(matrizNumeros + i) = (int *)malloc(5 * sizeof(int));
   }

   fillMatrix(matrizNumeros, 5, 5, 20);
   printmatrix1(matrizNumeros, 5, 5);
   std::cout << std::endl
             << std::endl;
   printmatrix2(matrizNumeros, 5, 5);

   // Ejercicio 4
   // a) y b)
   Fecha nacimiento;
   nacimiento.day = 21;
   nacimiento.month = 2;
   nacimiento.year = 2001;
   printFecha(nacimiento);
   //c)
   Fecha *David = &nacimiento;
   David->day;
   David->month;
   David->year;
   printFecha(David);
   //d)
   Fecha *hoy = (Fecha *)malloc(sizeof(Fecha));
   hoy->day = 11;
   hoy->month = 10;
   hoy->year = 2020;
   printFecha(hoy);

   return 0;
}
