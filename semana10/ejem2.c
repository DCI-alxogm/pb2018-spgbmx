#include<stdio.h>

int main (int argc, char *argv[])
{
	printf("El programa que estas ejecutando es: %s\n",argv[0]);
	char *ejemplo2;
	FILE *fp;
	if(argc==2)
	{
		ejemplo2=argv[1];
		printf("El nombre del archivo a abrir es:%s\n",ejemplo2);
		fp=fopen(ejemplo2,"w+");
		fprintf(fp,"Ejemplo2 de argumentos de la funcion main");
		fclose(fp);
	}
	else if (argc>2)
	{
		printf("Más argumentos de los necesarios\n");
	}
	else
	{
		printf("Se requiere de al menos 1 argumento\n");
	}
	return 0;
}
