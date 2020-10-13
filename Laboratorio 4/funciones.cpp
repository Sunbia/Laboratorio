#include "funciones.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
int maxvalueinarray(int *max, int size)
{
   int mayor = *max;
   for (int i = 0; i < size; i++)
   {
      if (*max >= mayor)
      {
         mayor = *max;
      }
      max++;
   }
   return mayor;
}

void printarray1(int *arreglo, int size)
{
   for (int i = 0; i < size; i++)
   {
      std::cout << "valor[" << i << "]=" << *arreglo << "\tdireccion=" << arreglo << std::endl;
      arreglo++;
   }
}

void printarray2(int arreglo[], int size)
{
   for (int i = 0; i < size; i++)
   {
      std::cout << "valor[" << i << "]=" << arreglo[i] << "\tdireccion=" << &arreglo[i] << std::endl;
   }
}

void printmatrix1(int **matrix, int rows, int columns)
{
   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j < columns; j++)
      {
         std::cout << *(*(matrix + i) + j) << " ";
      }
      std::cout << std::endl;
   }
}

void printmatrix2(int *matrix[], int rows, int columns)
{
   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j < columns; j++)
      {
         std::cout << matrix[i][j] << " ";
      }
      std::cout << std::endl;
   }
}

void printFecha(Fecha fecha)
{
   std::cout << fecha.day << std::endl;
   std::cout << fecha.month << std::endl;
   std::cout << fecha.year << std::endl;
}
void printFecha(Fecha *fecha){
   std::cout << fecha->day << std::endl;
   std::cout << fecha->month << std::endl;
   std::cout << fecha->year << std::endl;
}
void fillArray(int *arreglo, int size, int range)
{
   srand((int)time(NULL));
   for (int i = 0; i < size; i++)
   {
      *arreglo = rand() % range + 1;
      arreglo++;
   }
}
void fillMatrix(int **matrix, int rows, int columns, int range)
{
   srand((int)time(NULL));
   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j != columns; j++)
      {
         *(*(matrix + i) + j) = rand() % range + 1;
      }
   }
}
