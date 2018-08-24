//Este programa convierte números pares a impares
//Realizado por Patricia Godinez el 23 de agosto de 2018
#include<stdio.h>
int main ()
{
	int a, b;
	printf("Introduce un número \n");
	scanf("%i",&a);
	if(a%2==0)//Esta condición indica que se debe cumpir que el reciduo de la división del número indicado entre dos es igual a cero, en caso de que esto sea falso se llevará a cabo el else.
	{
		b=a+1;
		printf("\nAhora tu número es impar b=%i",b);
	}
	else
	{
		printf("\nEl número que indicaste ya es un número impar \n");
	}

}
