//Este programa nos muestra cómo se utiliza la funcion de switch
//Creado por Patricia Godinez el 22 de agosto de 2018
#include<stdio.h>

int main()
{
	int opcion, edad, peso;
	printf("Elige uno de los siguientes comandos\n");
	printf("(1) Si eres Hombre \t");
	printf("(2) Si eres Mujer \n");
	scanf("%i",&opcion);

	switch(opcion)
	{
		case 1 :
			
			printf("\nIntoduce tu edad");
			scanf("%i",&edad);
			printf("\nTu edad es %i \n",edad);
			break;
		case 2 :
			
			printf("\nIntroduce tu peso");
			scanf("%i",&peso);
			printf("\nTu peso es %i \n",peso);
			break;

	}
}
