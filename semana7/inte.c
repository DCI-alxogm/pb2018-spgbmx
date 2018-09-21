//Este programa calcula f(x) e I(x)
//Creado por Patricia Godinez el 19 de Septiembre de 2018
#include<stdio.h>
#include<math.h>

int main ()
{
	int p, a, b, N, K, x, h, k, l, z;
	float fx, Ix, delta, fba, fa, fb, akh, sumato;


	//Leyendo el archivo.
	FILE *datos;
	FILE *res;
	datos=fopen("entrada.txt","r");
	fscanf(datos,"%i %i %i %i %i",&p,&a,&b,&N,&K);
	fclose(datos);

	//Definiendo variables necesarias.
	delta=(b-a)/N;
	z=(N-1);
	fa=pow(a,p);
	fb=pow(b,p);
	fba=(fb+fa)/2;

	//Realizando los cálculos.
	for(x=a;x<=b;x++)
	{
		//Calculando fx
		
		fx=pow(x,p);
		//printf("%i\t %f \t %f \n",x,fx,Ix);//Printf provisional.
		x+=delta;
	}

/*	//Calculando Ix
		for(k=1;k=z;k++)
		{
			akh=a+(k*delta);
			sumato=pow(akh,p);
		}
		//sumato=pow(akh,p);
		
	Ix=delta*(fba+sumato);	
	//printf("%i\t %f \t %f \n",x,fx,Ix);//Printf provisional.*/

	res=fopen("resultados.txt","w");
	fprintf(res,"x\t f(x)\t I(x)\n");
	for(x=a;x<b;x++)
	{
		fprintf(res,"%f\t %f \t %f \n",x,fx,Ix);
	}
	fclose(res);
return 0;

}
