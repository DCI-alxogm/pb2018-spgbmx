//Este programa multiplica un numero dado de arreglos por 2. 
//Escrito por Patricia Godinez el 10 de septiembre de 2018
#include<stdio.h>

int main ()
{
	int i, j, n;
	printf("Introduce el numero de elementos para trabajar\n");
	scanf("%i",&n);
	float numeros[n]; //Esta no es la manera optima de hacer una reserva de memoria dinamica

	for(j=0;j<n;j++)
	{
		scanf("%f",&numeros[j]);
		numeros[j]*=2;
		printf("%f\n",numeros[j]);
	}
return 0;
}
