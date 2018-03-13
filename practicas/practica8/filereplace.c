#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define printDebug(...) do{ \ 
	char *isDebug; \
	isDebug = getenv("DEBUG"); \
	if (isDebug != NULL && !strcmp(isDebug, "y"))\
	{\
		fprintf(stderr, __VA_ARGS__); \
	}\
}while(0) \


int main(int argc, char const *argv[])
{
	char *fileName = "input.txt";
	FILE *input;
	char *search = "mundo";
	char *replace = "MUNDO";
	char word[255];
	int searchPos= 0;
	char *character;
	input = fopen(fileName,"r");

	while(1)
	{
		fscanf(input,"%s", word);
		if (feof(input))
		{
			break;
		}
		if(strcmp(word,search) == 0)
		{
			printDebug("Found %s\n", word);
			fseek(input, -1*strlen(search), SEEK_CUR);
			searchPos = ftell(input);
			printDebug("search = %d\n", searchPos);
			rewind(input);
			while(ftell(input) != searchPos)
			{
				character = fgetc(input);
				fputc(character,stdout);
			}
			
			break;
		}
	}

	return 0;
}