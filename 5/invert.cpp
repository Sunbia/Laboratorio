#include "invert.h"
#include<iostream>
void invertir(int arr[], int size) 
{ 
    int start = 0;
    int end = size-1;
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
}     
void rellenar(int vector[], int size)
{
    for (int i = 0; i < size; i++)
    {
        vector[i] = i;
    }
}
void printvector(int vector[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << vector[i] << " ";
    }
    std::cout << "\n";
}
