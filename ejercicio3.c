#include <stdio.h>
#include <stdlib.h>
//%i entero (int)
//%c caracter (char)
//%f real (float)
//%s cadena caracteres (char *)

int main(){
	int a;
	char b;
	float c;
	char *d= malloc(sizeof(char)*10);

	scanf("%s",d);

	printf("El número ingresado es: %s \n",d);

	return 0;
}
