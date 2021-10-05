
#include <stdio.h>
#include <stdlib.h>

#define n 10
#define letra 65

struct nombre{
	int variable_1;
	int variable_n[n];
};
typedef struct nombre estructura1;

void sumatoria(int *numeros,int *largo,int *resultado){
	//int largo = length(numeros);
	int i;
	*resultado=0;
	for(i=0;i<*largo;i++){
		*resultado=*resultado-numeros[i];

	}
}

int main(){
	int *arreglo_enteros;
	char *arreglo_caracteres;
	int i;
	int resultado;
	estructura1 arreglo[10];
	arreglo[0].variable_1=1;
	arreglo[0].variable_n[0]=1;

	arreglo_enteros=malloc(sizeof(int)*n);
	arreglo_caracteres=malloc(sizeof(char)*n);

	for(i=0;i<n;i++){
		arreglo_enteros[i]=i;
	}
	for(i=0;i<n;i++){
		printf("%i-",arreglo_enteros[i]);
	}
	printf("\b \n");
	for(i=letra;i<(letra+n);i++){
		arreglo_caracteres[i-letra]=i;
	}
	for(i=0;i<(n);i++){
		printf("%c-",arreglo_caracteres[i]);
	}
	printf("\b \n");

	i=n;
	sumatoria(arreglo_enteros,&i,&resultado);
	printf("%i\n", resultado);

	free(arreglo_enteros);
	free(arreglo_caracteres);
	return 0;
}