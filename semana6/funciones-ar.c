//Este programa evalúa direntes funciones.
//Creado por Patricia Godinez el 5 de septiembre de 2018
#include<stdio.h>
#include<math.h>

int main ()
{
	float x, ex, loga, sen, cose, ra, delta;
	int ini, fin, i;

	printf("Introduce el numero de inicio: ");
	scanf("%i",&ini);
	printf("Introduce el numero de clausura: ");
	scanf("%i",&fin);
	printf("\nIntroduce el numero de iteraciones que deseas:");
	scanf("%i",&i);
	
	delta=(fin-ini)/i;
	x=ini;
	for(x=0;x<fin;x++)
	{	ex=exp(x);
		loga=log(x);
		sen=sin(x);
		cose=cos(x);
		ra=sqrt(x);
		x=x+delta;
		//printf("x=%f \texp(x)=%f \tlog(x)=%f \tsen(x)=%f \tcos(x)=%f \tsqrt(x)=%f \n",x,ex,loga,sen,cose,ra);
	}

	//Creando el archivo con los resultados.
	FILE *ar;
	
	
	ar=fopen("resultados-funciones.txt","w");
	fputs("Los resultados de las funciones son:\n",ar);
	for(x=0;x<fin;x++)
	{
		x=x+delta;
		fprintf(ar,"x=%f \texp(x)=%f \tlog(x)=%f \tsen(x)=%f \tcos(x)=%f \tsqrt(x)=%f \n",x,ex,loga,sen,cose,ra);
	}
return 0;
}
