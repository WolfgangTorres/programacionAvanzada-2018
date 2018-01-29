#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int isStrongPassword(char *inputString)
{
	bool hasUpper = false;
	bool hasLower = false;
	bool lenIsCorrect = false;
	bool hasDigit = false;
    int len = strlen(inputString);

    if (len >= 6 && len <= 20)
        {
        	lenIsCorrect = true;
        }
    for (int i = 0; i < len; i++) {
        if (islower(inputString[i])) 
        {
        	hasLower = true;
        }
        if (isupper(inputString[i]))
        {
        	hasUpper = true;
        }
        if (isdigit(inputString[i]))
        {
        	hasDigit = true;
        }
    }
    if(hasLower && hasUpper && hasDigit && lenIsCorrect)
	{
	    printf("Strong Password\n");
	    return 0;
	}
	else
	{ 
	    printf("Weak Password.\n");
	    if(!hasLower)
	    {
	    	printf("Debe de llevar minusculas. Inserte minusculas a la contraseña\n");
	    }
	    if(!hasUpper)
	    {
	    	printf("Debe de llevar mayuscula. Inserte mayusculas a la contraseña\n");
	    }
	    if(!hasDigit)
	    {
	    	printf("Debe de llevar digitos.Inserte digito a la contraseña\n");
	    }
	    if(!lenIsCorrect)
	    {
	    	printf("El tamaño minimo es de 6 caracteres y el maximo es de 20. Por favor elimine o agregue caracter\n");
	    }
	    return 1;
	}
}

int main()
{
    char inputString1[] = "LOL12";
    char inputString2[] = "LoL123";
    isStrongPassword(inputString1);
    isStrongPassword(inputString2);
    return 0;
}