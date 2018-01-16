//gcc cast.c -o cast.exe
// ./cast.exe
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 4;

	int *p;

	float f = 7.5;

	int max = 2147483647;

	long int d;

	int b= a + f; //11
	float c = a*f;

	int arreglo[5] = {0,2};

	d = (long)max * max;

	p = arreglo;
	for (int i = 0; i < sizeof(arreglo)/sizeof(arreglo[0]); i++)
	{
		*p = 67;
		p++;
	}

//	p = &a; // p: apunta a la direccion. & - regresa la direccion de la variable
//	*p = 7; //*p: accede al valor de la direccion que tiene p.
	printf(" p= %p,a = %i  b = %i , d = %li \n",p,a,b,d );
	printf(" f = %f, c = %f \n",f,c );
	return 0;
}