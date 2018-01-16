#include <stdio.h>

int swap_noWork(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	return 0;
}

int swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
	return 0;
}

int main(int argc, char const *argv[])
{
	int j=27, 
		k=34;

	swap_noWork(j,k);
	printf("j = %i, k = %i \n",j,k );

	swap(&j, &k);
	printf("j = %i, k = %i \n",j,k );
	return 0;
}