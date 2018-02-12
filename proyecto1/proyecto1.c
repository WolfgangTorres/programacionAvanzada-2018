#include <stdio.h>
#include <stdlib.h>
 
int comparacion (const void * a, const void * b)
{  
    return ( *(int*)a - *(int*)b );  
}
 

void printCombination(int arr[], int size, int cities)
{

    int data[cities];

    qsort (arr, size, sizeof(int), comparacion);
 

    combinacion(arr, data, 0, size-1, 0, cities);
}
 

void combinacion(int arr[], int data[], int start, int end, int index, int cities)
{

    if (index == cities)
    {
        for (int i=0; i<cities; i++)
            printf("%d " ,data[i]);
        printf("\n");
        return;
    }

    for (int i=start; i<=end && end-i+1 >= cities-index; i++)
    {
        data[index] = arr[i];
        combinacion(arr, data, i+1, end, index+1, cities);
 
 
        // Remove duplicates
        while (arr[i] == arr[i+1])
             i++;
    }
}
 
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int cities = 3;
    int size = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, size, cities);
    printf("Todas las combinaciones posibles\n");
}