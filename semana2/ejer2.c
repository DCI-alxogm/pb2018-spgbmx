/*Creado el 15 de agosto de 2018 por Patricia Godinez */
#include<stdio.h>

int main ()
{
	int a, b, c, d;
	int e1, e2, e3, e4; //Aquí se eligió int porque se introducirán numeros enteros
	printf("Por favor introduce 4 numeros enteros\n");
	printf("Introduce a:");
	scanf("%i",&a);
	printf("\nIntroduce b:");
	scanf("%i",&b);
	printf("\nIntroduce c:");
	scanf("%i",&c);
	printf("\nIntroduce d:");
	scanf("%i",&d);
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*c/d;
	e4=a+(b*c)/d;
	printf("E1=%i",e1);
	printf("\nE2=%i",e2);
	printf("\nE3=%i",e3);
	printf("\nE4=%i",e4);

}
