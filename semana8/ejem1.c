//Primer ejemplo del uso de apuntadores
//3 de ocubre de 2018
#include <stdio.h>
int main ()
{
	int var=20; //declaracion de la variable
	int *ip; //declaracion de la variable apuntador
	ip =&var; //asigna la dircción de la variable var al apuntador ip*
	
	printf("La dirección de la variable var es : %x \n",&var);
	printf("Dirección guardada en el apuntador ip : %x \n",ip);
	printf("El valor de *ip : %d \n", *ip);
	return 0;
}
