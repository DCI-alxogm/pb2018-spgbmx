/*Este programa calcula la edad del usuario, creado por Patricia Godinez el 15 de Agosto de 2018*/
#include<stdio.h>
int main ()
{
	int anio_nac, anio_des, anio_tot;
	
	printf("Introduce en qué año naciste:");
	scanf("%i",&anio_nac);
	printf("\nIntroduce el año que desees saber tu edad:");
	scanf("%i",&anio_des);
	anio_tot=anio_des-anio_nac;
	printf("Tu edad en ese año es: %i \n",anio_tot);



return(0);
}
