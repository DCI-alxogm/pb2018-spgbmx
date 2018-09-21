//Este programa calcula f(x) e I(x)
//Creado por Dra. Alma, escrito por Patricia Godinez el 20 de Septiembre de 2018
#include<stdio.h>
#include<math.h>

int main ()
{
	int p, a, b, N, K, i, j;
	float fx[i], Ix[i], x[i], fa, h, delta, sum;


	//Leyendo el archivo.
	FILE *datos;
	FILE *res;
	datos=fopen("entrada.txt","r");
	fscanf(datos,"%i %i %i %i %i",&p,&a,&b,&N,&K);
	fclose(datos);

	for(i=0;i<N;i++)
    {
        x[i]=0;
        fx[i]=0;
        Ix[i]=0;
    }

    for(i=0;i<N;i++)
    {
        x[i]=0;
        fx[i]=0;
        Ix[i]=0;
    }


    delta=(b-a)/N;
    for(i=0;i<=N;i++)
    {
        x[i]=a+(i*delta);
        fx[i]=pow(x[i],p);
    }
    fa=pow(a,p);
    for(i=0;i<=N;i++)
    {
        h=(x[i]-a)/K;
        sum=0;
        for(j=1;j<K;j++)
        {
            sum=sum+pow(x[i]+ h*j, p);
        }
        Ix[i]=((fx[i]+fa)/2)+sum;
    }


    //Creando archivo de resultados
    res=fopen("resultados.txt","w");
    fprintf(res,"x\t f(x)\t I(x)\n");

    for(i=0;i<N;i++)
    {
        fprintf(res,"%f\t %f \t %f \n",x[i],fx[i],Ix[i]);
    }

}
