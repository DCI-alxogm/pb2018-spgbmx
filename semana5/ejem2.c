//Creado por Patricia Godinez el 3 de Septiembre de 2018
#include<stdio.h>
#include<math.h>

int main ()
{
	float expo;
	int n=10, j;
	
	for(j=0;j<n;j++)
	{
		expo=exp(j);
		printf("%i \t %f\n",j,expo);
	}
return 0;
}
