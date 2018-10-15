#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[])
{
	printf("El programa que estás ejecutando es: %s\n",argv[0]);
	char *nombre_archivo;
	float Tin,Tfin;
	int num;
	FILE *fp;
	if(argc==5)
	{
		Tin=atof(argv[1]);
		Tfin=atof(argv[2]);
		num=atoi(argv[3]);
		nombre_archivo=argv[4];
		printf("El nombre del archivo a abrir es:%s \n",nombre_archivo);
		fp=fopen(nombre_archivo,"w+");
		fprintf(fp,"Tin:%f\tTfin:%f\tN:%i",Tin,Tfin,num);
		fclose(fp);
	}
	else if(argc>5)
	{
		printf("Diste más de los argumentos necesarios\n");
	}
	else
	{
		printf("Se requieren 4 argumentos: Tin, Tfin, num, nombre_archivo.\n");
	}
	return 0;
}
