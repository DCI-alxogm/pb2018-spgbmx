//Este programa calcula las temperaturas en diferentes puntos de una placa. Proyecto2.
//Creado por Patricia Godinez el 24 de Octubre de 2018.

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    FILE *fp;
    FILE *f0;
    FILE *f1;
    int num,iarr,iab,jder,jiz,i,j,eps;
    float T[200][200];
    fp=fopen("datos.txt","r");
    fscanf(fp,"%i\t%i\t%i\t%i\t%i\t%i\t",&num,&eps,&iarr,&iab,&jder,&jiz);
    fclose(fp);
    printf("%i\t%i\t%i\t%i\t%i\t%i\n",num,eps,iarr,iab,jder,jiz);//printf provisional para ver si se esta lleyendo el archivo.

    for(i=0;i<=num;i++)
    {
        T[i][num]=iarr;
    }
    for(i=0;i<=num;i++)
    {
        T[i][0]=iab;
    }
    for(j=0;j<=num;j++)
    {
        T[0][j]=jiz;
    }
    for(j=0;j<=num;j++)
    {
        T[num][j]=jder;
    }

    //Llena matriz provisional
    for(i=1;i<num-1;i++)
    {

        for(j=1;j<num-1;j++)
        {
            T[i][j]=0;
        }
    }

    f0=fopen("T_inicial.txt","w");
    //printf provisional
        for(i=0;i<=num;i++)
        {
            for(j=0;j<=num;j++)
            {
                fprintf(f0,"T[%i][%i]=%f\n",i,j,T[i][j]);
            }

        }
    fclose(f0);

    int k, t;
    t=1;//contador.
    k=5; //num de iteraciones.
    while(t<k)
    {
        printf("//////////////////////////////////\n");// separador de matrices.
        for(i=1;i<=num-1;i++)
        {
            for(j=1;j<=num-1;j++)
            {
                T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
                //printf("T[%i][%i]=%f\n",i,j,T[i][j]);//Printf provisional
            }
        }
        for(i=0;i<=num;i++)
        {
            for(j=0;j<=num;j++)
            {
                //T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
                printf("T[%i][%i]=%f\n",i,j,T[i][j]);
            }
        }
        t++;
    }
    /*f1=fopen("T_1.txt","w");
        //printf provisional
        for(i=0;i<=num;i++)
        {
            for(j=0;j<=num;j++)
            {
                fprintf(f1,"T[%i][%i]=%f\n",i,j,T[i][j]);
            }

        }
        fclose(f1);*/
}
