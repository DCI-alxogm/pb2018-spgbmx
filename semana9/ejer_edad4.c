//Este programa calcula la edad del usuario haciendo uso de funciones. Con argumentos de entrada y de salida.
//Creado por Patricia Godinez el 11 de octubre de 2018.
#include<stdio.h>

int edad (int x, int y);

int main ()
{
    int anio_nac, anio_des, anio_tot;

	printf("Introduce en qu� a�o naciste:");
	scanf("%i",&anio_nac);
	printf("\nIntroduce el a�o que desees saber tu edad:");
	scanf("%i",&anio_des);
    anio_tot=edad (anio_nac,anio_des);
    printf("Tu edad en el a�o %i es: %i \n",anio_des,anio_tot);
    return 0;
}
int edad(int x, int y)
{
	return y-x;

}

