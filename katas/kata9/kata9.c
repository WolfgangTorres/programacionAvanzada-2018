#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int caluclarPeliculas(int tiempoVuelo, int *tiempoPeliculas, int tamaño)
{
    int boolean = 0;
    for(int i=0; i < tamaño; i++)
    { 
        for(int j=i+1; j < tamaño; j++)
        {
            int sum = tiempoPeliculas[i] + tiempoPeliculas[j];
            if(sum == tiempoVuelo)
            {
                printf("Puedes ver la: Pelicula %d con la Pelicula %d \n", i+1, j+1);
                boolean = 1;
            }
        }
    }
    return boolean;
}

int main()
{

    int tiempoPeliculas[10];

    for(int i=0; i<10; i++)
    {
        tiempoPeliculas[i]=40+(10*i);
    }
    int tamaño = sizeof(tiempoPeliculas)/sizeof(tiempoPeliculas[0]);
    int siHayPelicula=caluclarPeliculas(110,tiempoPeliculas, tamaño);
    printf("Boolean: %d\n",siHayPelicula);
    if(siHayPelicula){
        printf("Si hay peliculas que duren lo del vuelo\n");
    }
    else
    {
        printf("No hay peliculas que duren lo del vuelo\n");
    }
    return 0;
    
}