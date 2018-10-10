//Este programa muestra el uso de funciones con argumentos de entrada y sin argumentos de salida
//Escrito por Patricia Godinez el 10 de Octubre de 2018
#include<stdio.h>

void cuadrado(float x);
int main ()
{
	float x,x2;
	printf("Introduce un numero:\n");
	scanf("%f",&x);
	cuadrado(x);
	return 0;
} 
void cuadrado(float x)
{
	float x2;
	x2=x*x;
	printf("El cuadrado de %f es %f\n",x,x2);
}
