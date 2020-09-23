#include <stdio.h>
#include <stdlib.h>
int suma;

int sumador_normal(int a,int b){
	suma=a+b;
	printf("%i\n",suma );
	return suma;
}

void sumador_puntero(int *a, int b){
	suma=*a+b;
	*a=*a+b;
}


int main(int argc, char const *argv[])
{
	int *var_puntero;
	int var_normal;
	int suma_normal;
	int suma_puntero;

	var_puntero=malloc(sizeof(int)*100);
	
	var_normal=10;
	*var_puntero=20;

	suma_normal = sumador_normal(var_normal,*var_puntero);
	printf("%i\n", suma_normal);
	sumador_puntero(var_puntero,var_normal);
	printf("%i\n", *var_puntero);
	free(var_puntero);
	return 0;
}