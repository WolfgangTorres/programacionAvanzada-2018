#include <stdio.h>
#include "operations.h"

void printMessage(int condition, char *messagePassed, char *messageFailed)
{
	if (condition)
	{
		printf("%s\n",messagePassed );
	}
	else
	{
		printf("%s\n",messageFailed );
	}
}

int testAddition()
{
	int a = 5;
	int b = 7;

	int result = add(a,b);
	int expected = a + b;

	return result == expected;
}

int testSubstraction()
{
	int c = 10;
	int d = 7;

	int resultSustraction = substraction(c,d);
	int expectedSustraction = c - d;

	return resultSustraction == expectedSustraction;
}

int main()
{
	//Test add
	printMessage(testAddition(), "add test passed", "add test failed");
	printMessage(testSubstraction(), "sustraction test passed", "sustraction test failed");

	return 0;
}