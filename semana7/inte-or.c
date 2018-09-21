//Este programa calcula f(x) e I(x)
//Creado por Patricia Godinez el 19 de Septiembre de 2018
#include<stdio.h>
#include<math.h>

int main ()
{
	int p, a, b, N, K, x, h, k;
	float fx, Ix, delta, fxa, fa, akh, sumato;


	//Leyendo el archivo.
	FILE *datos;
	FILE *res;
	datos=fopen("entrada.txt","r");
	fscanf(datos,"%i %i %i %i %i",&p,&a,&b,&N,&K);
	fclose(datos);

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

		//Calculando Ix
		for(k=1;k<=(K-1);k++)
		{
			akh=a+(k*h);

		}
		sumato=pow(akh,p);
		Ix=h*(fxa+sumato);
		//printf("%i\t %f \t %f \n",x,fx,Ix);//Printf provisional.
		x+=delta;
	}
//Creando archivo de resultados 
    res=fopen("resu.txt","w");
    fprintf(res,"x\t f(x)\t I(x)");
    for(x=a;x<=b;x++)
    {
        fprintf(res,"%f\t %f \t %f \n",x,fx,Ix);
    }
    fclose(res);
return 0;
}
