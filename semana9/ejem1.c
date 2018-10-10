//Este programa muestra el uso de funciones tipo sin argumentos de entrada ni salida.
//Escrito por Patricia Godinez el 10 de Octubre de 2018
#include<stdio.h>
void cuadrado();
int main ()
{
	cuadrado();
	return 0;
}
void cuadrado()
{
	float x, x2;
	printf("Introduce un numero:\n");
	scanf("%f",&x);
	x2=x*x;
	printf("El cuadrado de %f es %f\n",x,x2);
}
