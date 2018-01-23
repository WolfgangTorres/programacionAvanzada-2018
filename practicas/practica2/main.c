#include <stdio.h>
#include <string.h>
#include "operations.h"
#include "message.h"
#define MAX_STRING_LENGHT 100
#define LAN "en"

typedef struct 
{
	char *operationName;
	int (*operation) (int,int);	
} Operation;

int main()
{
	char operation[MAX_STRING_LENGHT];
	int operator1, operator2;
	char **operationMessage;

	if (!strcmp(LAN,"en"))
	{
		operationMessage = message_EN;
	}
	if (!strcmp(LAN,"es"))
	{
		operationMessage = message_ES;
	}

	printf("%s\n",operationMessage[0]);
	scanf("%s", operation);
	scanf("%d %d", &operator1,&operator2);
	if (!strcmp(operation, "add"))
	{
		printf("%s: %d\n",operationMessage[2],add(operator1,operator2));
	}
	else if(!strcmp(operation, "substraction"))
	{
		printf("%s: %d\n",operationMessage[2],substraction(operator1,operator2));
	}
	else
	{
		printf("%s\n",operationMessage[1] );
	}
	return 0;
}