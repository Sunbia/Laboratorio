#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
typedef struct 
{
   int day;
   int month;
   int year;
}Fecha;

int maxvalueinarray(int[],int); // hallar valor maximo en un arreglo
void printarray1(int *arreglo, int size);
void printarray2(int arreglo[], int size);
void printmatrix1(int **matrix,int rows,int columns);
void printmatrix2(int *matrix[],int rows,int columns);
void printFecha(Fecha fecha);
void printFecha(Fecha *fecha);
int genrandom(int range);
void fillArray(int arreglo[], int size, int range);
void fillMatrix(int *matrix[], int rows, int columns, int range);

#endif // !FUNCIONES_HPP
