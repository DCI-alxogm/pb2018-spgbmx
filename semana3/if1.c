//este programa nos indica si un número es par o impar
//realizado por Patricia Godinez el 23 de agosto de 2018
#include<stdio.h>

int main ()
{
	int a;
	printf("introduce un número\n");
	scanf("%i",&a);
	if(a%2==0)//Aquí para poder cumplir la condición del if se hace la division del numero elegido entre dos, si el reciduo de ésta es igual a 0, entonces, se lleva a cabo el printf siguiente.
	{
		printf("\na=%i es un número par\n",a);
	}
	else//En caso de que no se cumpla la condición del if, o sea que el reciduo de la división sea diferente de cero, se llevará a cabo la instrucción indicada en el else.
	{
		printf("a=%i es un número impar\n",a);
	}
return 0;
}
