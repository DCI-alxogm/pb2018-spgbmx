//Este programa nos permite calcular temperaturas utilizando un ciclo for.
//Crado por Patricia Godinez el 3 de Septiembre de 2018.
#include<stdio.h>

int main ()
{
	float temp_C, temp_K, Temp_C, final, delta;
	int N, i, op=1;
	while(op==1)
	{	
	printf("Intoduce la temperatura inicial en grados Centígrados:");
	scanf("%f",&Temp_C);
	printf("\nIntroduce la temperatura final en grados Centígrados:");
	scanf("%f",&final);
	printf("\nIntroduce el numero de iteraciones deseadas:");
	scanf("%i",&N);

	delta=(final-Temp_C)/N;
	temp_C=Temp_C;
	for(i=0;i<=N;i++)
	{
		temp_K=temp_C+273.15;
		printf("\n %f \t %f \n",temp_C,temp_K);
		temp_C+=delta;
	}
	printf("¿Deseas continuar usando el programa? (si/no) si=1  no=0 \t");
	scanf("%i",&op);
	}
return 0;

}
