//Este programa convierte coordenadas cartesianas a coordenadas polares
//Creado por Patricia Godinez el 23 de agosto de 2018

#include <stdio.h>
#include <math.h>
int main ()
{
	float x, y, r, the, the2, the3, the4, PI=3.1416 ;


	printf("Ingresa x:");
	scanf("%f",&x);
	printf("\tIngresa y:");
	scanf("%f",&y);
	printf("\nLa coordenada ingesada es: (%f,%f)\n",x,y);

	r=sqrt(pow(x,2)+pow(y,2));
	the=atan(y/x)*(180/PI);//Este seria el calculo en caso de que las coordenadas esten en el cuadrante 1.
	the2=(atan(y/x)*(180/PI))+180;//Calculando angulo en el segundo cuadrante
	the3=(atan(y/x)*(180/PI))+180;//Calculando angulo en el tercer cuadrante
	the4=(atan(y/x)*(180/PI))+270;//Calculando angulo en el cuarto cuadrante

//Para poder calcular de acuerdo al cuadrante en que se encuentra la coordenada se deben cumplir las siguientes condiciones de los if y else
	if(x>0 && y>0)
	{
		printf("La coordenada polar está situada en el cuadrante I: (%f,%f grados) \n",r,the);
	}
	else if(x<0 && y>0)
	{
		printf("La coordenada polar está situada en el cuadrante II:(%f,%f grados) \n",r,the2);
	}
	else if(x<0 && y<0)
	{
		printf("La coordenada polar está situada en el cuadrante III:(%f,%f grados) \n",r,the3);
	}
	else if(x>0 && y<0)
	{
		printf("La coordenada polar está en el cuadrante IV:(%f,%f grados) \n",r,the4);
	}
return 0;
}
