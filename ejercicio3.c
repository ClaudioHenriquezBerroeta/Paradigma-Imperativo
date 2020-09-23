#include <stdio.h>
#include <stdlib.h>
//%i entero (int) &var
//%c caracter (char) &var
//%f real (float) &var
//%s cadena caracteres (char *) var

int main(){
	int a;
	char b;
	float c;
	char *d= malloc(sizeof(char)*10);

	scanf("%s",d);

	printf("El número ingresado es: %s \n",d);

	return 0;
}
