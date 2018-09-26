#include<stdio.h>

int main ()
{
	float xi,yi,zi,Vxi,Vyi,Vzi;
	int h,M,i;
	float r,X,Y,Z,Vx;
	
	//leyendo la informacion del archivo.
	FILE *fp;
	fp=fopen("planetas.txt","r");
	fscanf(fp,"%f %f %f %f %f %f %i %i",&xi,&yi,&zi,&Vxi,&Vyi,&Vzi,&h,&M);
	fclose(fp);

	//Calculando r.
	

	//Calculos de posiciones.
	X=xi+(Vxi*h);
	printf("%f %f %f %f %f %f %i %i \n",xi,yi,zi,Vxi,Vyi,Vzi,h,M);
	for(i=0;i<10;i++)
	{
		printf("%f\t",xi);
		X=xi+(Vxi*h);
		
		printf("%f\n",X);
		xi=X;
	}



/*	Y=yi+(Vyi*h);
	//printf("%f %f %f %f %f %f %i %i \n",xi,yi,zi,Vxi,Vyi,Vzi,h,M);
	for(i=0;i<10;i++)
	{
		printf("%f",Y);
		Y=yi+(Vyi*h);
		yi=Y;
		
		printf("%f\n",yi);
	}
*/
	

	
}
