//Este programa calcula la edad del usuario haciendo uso de funciones. Sin argumentos de entrada ni de salida.
//Creado por Patricia Godinez el 11 de octubre de 2018.
#include<stdio.h>

void edad ();

int main ()
{
    edad ();
    return 0;
}
void edad()
{
    int anio_nac, anio_des, anio_tot;

	printf("Introduce en qué año naciste:");
	scanf("%i",&anio_nac);
	printf("\nIntroduce el año que desees saber tu edad:");
	scanf("%i",&anio_des);
	anio_tot=anio_des-anio_nac;
	printf("Tu edad en el año %i es: %i \n",anio_des,anio_tot);
}
