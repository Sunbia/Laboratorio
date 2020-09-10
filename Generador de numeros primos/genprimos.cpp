#include <iostream>
#include "genprimos.h"
/*                     Algoritmo: Criba de Eratóstenes
            Permite hallar todos los numeros primos entre 2 - n
    1.- Crear una lista de 2 hasta n
    2.- Identificar si lista[i] es primo (en este caso si es primo debido a que empieza desde el numero 2)
    3.- Eliminar a todos los que son multiplos de 2 (o reemplazar por 0 si se implementa con array)
    4.- volver al paso 2
        #pd: El 1 no cuenta como primo debido a que solo tiene un divisor
            y un numero primo comun tiene dos: el 1 y él mismo.
        #pd2: Hacerlo con arrays se nos hace mas complicado debido a que se
              desaprovecha la memoria. con la libreria <vector> se nos haria
              mas facil, porque en vez de reemplazar por 0, con vectores solo
              se elimina lo que no necesitamos.
*/

// Aqui creamos la lista de 2 hasta n
void RellenarArray(int elements[], int size)
{
    for (int i = 2; i < size; i++)
    {
        elements[0] = 0;
        elements[1] = 0;
        elements[i] = i;
    }
}
// Se muestra la lista sin ceros.
void printCriba(int elements[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (elements[i] == 0)
        {
            continue;
        }
        std::cout << elements[i] << "\t" << std::endl;
    }
}

// Se verifica si el valor es primo
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

void Criba(int n)
{
    //Crear un array de 2 a n
    int number_list[n + 1];
    RellenarArray(number_list, n + 1);
    /*  Si el numero es primo entonces se se crea otro indice que
                vaya avanzando la misma cantidad de ese numero, y esos
                numeros se reemplazan por 0 (o se eliminan).

                Y por ultimo se va saltando los valores 0.
    */
    for (int i = 2; i < n + 1; i++)
    {
        if (Primo(number_list[i]))
        {

            for (int j = i + number_list[i]; j < n + 1; j = j + number_list[i])
            {
                if (number_list[i] == 0)
                {
                    continue;
                }
                number_list[j] = 0;
            }
        }
    }
    // Se imprime
    printCriba(number_list, n + 1);
}
