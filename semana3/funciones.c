//Este programa evalua varias funciones con el valor de una variable X
//Creado por Patricia Godinez el 20 de agosto de 2018

#include<stdio.h>
#include<math.h>
int main ()
{
	float x, y1, y2, y3, pi, xrad;
	printf("Introduce x=");
	scanf("%f",&x);
	pi=3.1416;//Definimos a Pi
	xrad=(x*pi)/180;//Conversion de grados a radianes
	
	y1=exp(-x);	
	y2=(cos(xrad))+(2*tan(xrad/2));
	y3=(log(x))+(3*(x*x));// Aquí log(x) calcula el logaritmo natural de x
	
	printf("\ny=exp(-x)=%f",y1);
	printf("\ny=cos(x)+2tan(x/2)=%f",y2);
	printf("\ny=log(x)+3x^2= %f \n",y3);
}
