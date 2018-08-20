//Este programa convierte temperaturas en grados celcius a kelvin y Fahrenheit
//Creado por Patricia Godinez el 20 de agosto de 2018
#include<stdio.h>


int main ()
{
	int C;
	float K, F, Ce, Cel;
	printf("Introduce una temperatura en grados celcius:");
	scanf("%i",&C);
	F=(C*1.8)+32;
	K=C+273.15;
	printf("\nLa temperatura en grados Fahrenheit es : %f",F);
	printf("\nLa temperatura en Kelvin es : %f \n",K);
	Ce=(F-32)/1.8;
	Cel=K-273.15;
	printf("Convirtiendo de vuelta los Farhenheit a Celcius : %f \n",Ce);
	printf("Convirtiendo de vuelta los Kelvin a Celcius : %f \n",Cel);

}
