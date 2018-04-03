#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void solucionProyecto(int tests,int row, int col, int width) {
	if (col%width == 0)
	{
      printf("Es multiplo:\n Case # %d: %d\n",tests, (row)*(col/width) + width - 1);
      printf("\n");
	}
  	else
  	{
  		printf("No es multiplo:\n Case # %d: %d\n",tests, (row)*(col/width) + width);
  		printf("\n");
  	}
}

int main(int argc, char const *argv[])
{
	int tests = 5;
	for (int i = 1; i <= tests; ++i)
	{
		int col = rand() % 6 + 1;
		int width = rand() % col + 1;
		printf("Fila: %d, Col: %d, width: %d\n",1+i,col,width);
		solucionProyecto(i,1+i,col,width);
	}
	return 0;
}