//Este programa calcula las temperaturas en diferentes puntos de una placa. Proyecto2.
//Creado por Patricia Godinez el 24 de Octubre de 2018.

#include<stdio.h>
#include<stdlib.h>
void LlenaMatriz(int num, float T[200][200]);
int main ()
{
    FILE *fp;
    FILE *f0;
    int num,iarr,iab,jder,jiz,i,j,n=300;
    float T[200][200],eps;
    fp=fopen("datos.txt","r");
    //num= dimensiones de la placa. eps=epsilon. iarr=magnitud de la temperatura del lado superior. iab=magnitud de la temperatura del lado inferior. jder=magnitud de la temperatura del lado derecho. jiz=magnitud de la temperatura del lado izquierdo.
    fscanf(fp,"%i\t%f\t%i\t%i\t%i\t%i\t",&num,&eps,&iarr,&iab,&jder,&jiz);
    fclose(fp);
    printf("%i\t%f\t%i\t%i\t%i\t%i\n",num,eps,iarr,iab,jder,jiz);//printf provisional para ver si se esta lleyendo el archivo.

    for(i=0;i<=num;i++)//ciclos for para llenar los valores de los lados.
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
    //llamando a la funcion para llenar los valores del centro con ceros.
    LlenaMatriz(num,T);

    //Creando archivo inicial para guardar los datos.
    f0=fopen("T_inicial.txt","w");
        for(i=0;i<=num;i++)
        {
            for(j=0;j<=num;j++)
            {
                fprintf(f0,"%f\t",T[i][j]);
            }
            fprintf(f0,"\n");
        }
    fclose(f0);

    int k, t;
    float Told[200][200],tol=100;
    t=1;//contador.
    k=5; //numero maximo de iteraciones.
    while(t<k)
    {
        printf("//////////////////////////////////\n");// separador de matrices.
        for(i=1;i<=num-1;i++)
        {
            for(j=1;j<=num-1;j++)
            {
                T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
                //printf("T[%i][%i]=%f\n",i,j,T[i][j]);//Printf provisional
                Told[i][j]=T[i][j];

            }
        }
        if(tol>=eps)
        {
            for(i=0;i<=num;i++)
            {
                for(j=0;j<=num;j++)
                {
                    printf("%f\t",T[i][j]);
                }
                printf("\n");
            }
            tol=abs((T[i][j]-Told[i][j])/Told[i][j]);
        }
        else
        {
            printf("Se ha alcanzado la tolerancia maxima.");
            return 1;
        }


       /* int l=0;
        for(l=0;l<k;l++);
        {
            FILE *ar[k];
            char T[20];
            sprintf(T,"T_%i.txt",l);
            ar[l]=fopen(T,"w");
            for(i=0;i<num;i++)
            {
                for(j=0;j<num;j++)
                {
                    fprintf(ar[l],"%f \t",T[i][j]);
                }
                fprintf(ar[l],"\n");
            }
        }*/
        t++;
    }
}

void LlenaMatriz(int num, float T[200][200])
{
    int i,j;
    for(i=1;i<num-1;i++)
    {
        for(j=1;j<num-1;j++)
        {
            T[i][j]=0;
        }
    }
    printf("\n");
}
