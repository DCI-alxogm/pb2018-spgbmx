//Este programa convierte coordenadas cartesianas a coordenadas esféricas
//Creado por Patricia Godinez el 20 de agosto de 2018

#include<stdio.h>
#include<math.h>

int main ()
{
	int x, y, z;
	float r, the, phi;
	printf("Introduce x:");
	scanf("%i",&x);
	printf(" \nIntroduce y:");
	scanf("%i",&y);
	printf(" \nIntroduce z:");
	scanf("%i",&z);

	r=(sqrt((x*x)+(y*y)+(z*z)));
	the=(acos((z/r)));
	phi=(atan((y/x)));

	printf("\nr= %f \t",r);
	printf("teta= %f",the);
	printf("\tphi= %f",phi);
}
