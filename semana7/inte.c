#include<stdio.h>
#include<math.h>

int main ()
{
	int p, a, b, N, K, x, h, k;
	float fx, Ix, delta, fxa, fa, akh, sumato;
		
	//Leyendo el archivo.
	FILE *datos;
	datos=fopen("entrada.txt","r");
	fscanf(datos,"%i %i %i %i %i",&p,&a,&b,&N,&K);

	//Definiendo variables necesarias.
	delta=(b-a)/N;
	x=a;
	fa=pow(a,p);
	
	//Realizando los cálculos.
	for(x=a;x<=b;x++)
	{
		//Calculando fx
		h=(x-a)/K;
		fx=pow(x,p);
		fxa=(fx+fa)/2;
		x+=delta;
		//Calculando Ix
		for(k=1;k<=(K-1);k++)
		{
			akh=a+(k*h);
			
		}
		sumato=pow(akh,p);
		Ix=h*(fxa+sumato);
		printf("%i\t %f \t %f \n",x,fx,Ix);//Printf provisional.
	}
	
	
}
