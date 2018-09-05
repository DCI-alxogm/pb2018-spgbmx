//Este programa calcula el factorial de un número
//Creado por Patricia Godinez el 5 de Septiembre de 2018

#include<stdio.h>

int main ()
{
	int x, n, fac;
	
	printf("Introduce n=");
	scanf("&i",&n);

	for(x=1;x<=n;x++)
	{
		fac=x*n;
		printf("n!=%i",fac);
	}

}
