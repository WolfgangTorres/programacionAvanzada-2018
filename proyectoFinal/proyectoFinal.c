#include <stdio.h>
 
int main() {
	int n,m,
        valores[1001][1001],
        prioridades[1001][1001],
        id,
        atributo,
        valorTmp,
        prioridadTmp;

	for(int i = 0; i<1001; i++)
    {
	    for(int j = 0; j<1001; j++)
        {
	        prioridades[i][j]= -2;
	    }
	}
	printf("Ingrese el valor para N: ");
	scanf("%d",&n);
	printf("\nIngrese el valor para M: ");
	scanf("%d",&m);

	for(int i=0; i<n; i++)
    {
		printf("\nIngresar valores -> Ingrese valor del id: ");
	    scanf("%d", &id);
		printf("\nIngresar valores -> Ingrese valor del atributo: ");
	    scanf("%d", &atributo);
		printf("\nIngresar valores -> Ingrese valor del valor: ");
	    scanf("%d",&valorTmp);
		printf("\nIngresar valores -> Ingrese valor del prioridad: ");
	    scanf(" %d",&prioridadTmp);

	    if(prioridadTmp >= prioridades[id][atributo])
        {
	    	valores[id][atributo] = valorTmp;
	        prioridades[id][atributo] = prioridadTmp;    
	    }
	}

	for(int i = 0; i<m; i++)
    {
		printf("\nBuscar Valor -> Ingrese valor del id: ");
	    scanf("%d", &id);
		printf("\nBuscar Valor -> Ingrese valor del atributo: ");
	    scanf("%d", &atributo);
	    printf("\nValor: %d\n", valores[id][atributo]);
	}

	return 0;
}