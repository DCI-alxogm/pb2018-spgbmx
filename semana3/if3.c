//Este programa indica si un par de números son iguales o si uno es mayor o menor que el otro
//Realizado por Patricia Godinez el 23 de agosto de 2018
#include<stdio.h>
int main ()
{
	int n1, n2;
	printf("Introduzca dos números enteros:");
	scanf("%i %i",&n1,&n2);

	if(n1==n2)//Aquí la condición indica que se lleve a cabo la insctrucción solo si ambos números son iguales
	{
		printf("\nResultado: %i=%i",n1,n2);
	}
	else if(n1>n2)//Aquí se cumple la condición solo se n1 es mayor que n2
	{
		printf("\nResultado %i > %i",n1,n2);
	}
	else//Aquí se cumple la condición solo si n1 es menor que n2
	{
		printf("\nResultado %i < %i \n",n1,n2);
	}
return 0;
}
