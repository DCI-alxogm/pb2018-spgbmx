//Este programa muestra el uso de funciones con argumentos de salida, pero sin argumentos de entrada.
//Escrito por Patricia Godinez el 10 de Octubre de 2018.
#include<stdio.h>

float cuadrado();
int main ()
{
	
	cuadrado();
	float x,x2;
	printf("El cuadrado de %f es %f\n",x,x2);
	return 0;
}
float cuadrado()
{
	float x,x2;
	printf("Introduce un numero:\n");
	scanf("%f",&x);
	x2=x*x;
	return (x,x2);
}
