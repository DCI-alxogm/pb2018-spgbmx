//Este programa calcula la edad del usuario haciendo uso de funciones. Con argumentos de entrada y sin argumentos de salida.
//Creado por Patricia Godinez el 11 de octubre de 2018.
#include<stdio.h>

void edad (int x, int y);

int main ()
{
    int anio_nac, anio_des, anio_tot;

	printf("Introduce en qué año naciste:");
	scanf("%i",&anio_nac);
	printf("\nIntroduce el año que desees saber tu edad:");
	scanf("%i",&anio_des);
    edad (anio_nac,anio_des);
    return 0;
}
void edad(int x, int y)
{
	int anio_tot;
	anio_tot=y-x;
	printf("Tu edad en el año %i es: %i \n",y,anio_tot);
}

