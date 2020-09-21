#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int *var_puntero;
	int var_normal;

	var_puntero=malloc(sizeof(int));
	
	var_normal=10;
	*var_puntero=20;
	printf("%i\n", var_normal);
	printf("%i\n", *var_puntero);
	free(var_puntero);
	return 0;
}