#include "potencia.h"
int PotenciaPorValor(int a,int n){
    int contador = 0;
    int resultado= 0;
    while (contador == n)
    {   
        resultado+= a*a;
        contador++;
    }
    return resultado;
}

int PotenciaPorReferencia(int a, int* n){

}
