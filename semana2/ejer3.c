/*Creado el 15 de agosto de 2018 por Patricia Godinez */
#include<stdio.h>

int main ()
{
	float a, b, c, d;
	float e1, e2, e3, e4; //Aquí se usa float porque se esperan numeros reales
	printf("Por favor introduce 4 numeros reales\n");
	printf("Introduce a:");
	scanf("%f",&a);
	printf("\nIntroduce b:");
	scanf("%f",&b);
	printf("\nIntroduce c:");
	scanf("%f",&c);
	printf("\nIntroduce d:");
	scanf("%f",&d);
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*c/d;
	e4=a+(b*c)/d;
	printf("E1=%f",e1);
	printf("\nE2=%f",e2);
	printf("\nE3=%f",e3);
	printf("\nE4=%f",e4);

}
