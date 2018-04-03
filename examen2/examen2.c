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
            string[i] = '\0';
 			
            strcpy(tmp, &(string[i]) + 1);
            
        }
    }

    strcpy(tmp2, string);
    char * stringReverse ;
	if((stringReverse = malloc(strlen(tmp)+strlen(tmp2)+1)) != NULL){
	    //stringReverse[0] = '\0';   
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