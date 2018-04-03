/*

El codigo contiene dos files uno para leer y otro para escribir

Creamos un arreglo de caracteres

Entonces en un while obtenemos las lines del archivo que vamos a leer

entonces dentro del while llamo a la funcion revertir que recibe como parametro un arreglo de caracteres

sacamos el lenght apoyandome de librerias externas

creamo dos arreglos temporales

recorremos la linea de atras hacia adelante cuando haya un espacio copiamos la palabra a un arreglo tmp

ya que lleguemos a la ultima palabra salimos del for y copiamos la palabra al otro arreglo temporal


creamos un puntero char, creamos espacio para juntar las palabras en ese puntero, luego las copiamos y al final lo regresamos

por ultimo lo escribimos en el otro archivo

ME FALTO TIMEPO PROFESOR PERDON :(

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


char* revertirPalabra(char string[])
{
    int length = strlen(string);
    char tmp[255];
    char tmp2[255];
 
    int i;
    for (i = length - 1; i >= 0; i--) {
        if (string[i] == ' ') {        
            
 			
            strcpy(tmp, &(string[i]) + 1);
            
        }
    }

    strcpy(tmp2, string);
    char * stringReverse ;
	if((stringReverse = malloc(strlen(tmp)+strlen(tmp2)+1)) != NULL){
	       
	    strcpy(stringReverse,tmp);
	    strcat(stringReverse," ");
	    strcat(stringReverse,tmp2);
	    puts(stringReverse);
	}
	return stringReverse;
}


int main(int argc, char const *argv[])
{
	FILE *fileRead;
	FILE *fileWrite;
	


	fileRead = fopen("sample-Reverse.1.in", "r");

  	fileWrite = fopen("sample-Reverse.1.out", "w");

  	char character[256];

    while (fgets(character, sizeof(character), fileRead)) {
        char *tmp = revertirPalabra(character);
        fprintf(fileWrite, "%s", tmp);
        fprintf(fileWrite, "\n" );

        //printf("%s", line); 
    }
	
	fclose(fileRead);
	fclose(fileWrite);


	return 0;
}