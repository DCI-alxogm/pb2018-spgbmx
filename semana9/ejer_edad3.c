//Este programa calcula la edad del usuario haciendo uso de funciones. Con argumentos de salida y sin argumentos de entrada.
//Creado por Patricia Godinez el 11 de octubre de 2018.
#include<stdio.h>

int edad ();

int main ()
{
    int anio_tot;
    anio_tot=edad ();
    printf("Tu edad en ese a�o es: %i \n",anio_tot);
    return 0;
}
int edad()
{
    int anio_nac, anio_des, anio_tot;

	printf("Introduce en qu� a�o naciste:");
	scanf("%i",&anio_nac);
	printf("\nIntroduce el a�o que desees saber tu edad:");
	scanf("%i",&anio_des);
    return anio_des-anio_nac;

}
