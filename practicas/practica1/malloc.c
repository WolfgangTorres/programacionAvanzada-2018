#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int doFullName(char *firstName, char *lastName, char **fullName)
{
	int sizeFirstName = strlen(firstName);
	int sizeLastName = strlen(lastName);

	*fullName = (char *)malloc( (sizeFirstName + sizeLastName + 1 ) * sizeof(char));

	strcpy(*fullName, firstName);
	strcpy(*fullName + sizeFirstName, " ");
	strcpy(*fullName + sizeFirstName + 1, lastName);

	return 0;
}

int main(int argc, char const *argv[])
{
	char firstName[] = "Andres";//crea arreglo y puedo modificarlo
	char *lastName = "Torres";//constante
	char *fullName;
	printf("%p\n", &lastName );
	doFullName(firstName,lastName,&fullName);
	printf("Fullname = %s\n", fullName);
	free(fullName);
	return 0;

	/*git add archivoName
	  git commit -m "titulo"
	  git push -u origin master*/
}