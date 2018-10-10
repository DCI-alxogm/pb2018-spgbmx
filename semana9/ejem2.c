//Este programa muestra el uso de funciones con argumentos de entrada y de salida.
//Escrito por Patricia Godinez el 10 de octubre de 2018
#include<stdio.h>

float cuadrado(float h);
int main ()
{
	float x,x2;
	printf("Introduce un numero:\n");
	scanf("%f",&x);
	x2=cuadrado(x);
	printf("El cuadrado de %f es %f\n",x,x2);
	return 0;
}
float cuadrado(float h)
{
	return h*h;
}
