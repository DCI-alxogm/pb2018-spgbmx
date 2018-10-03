#include <stdio.h>
int main ()
{
	int Max=3;
	int var[]={10,100,200}; //el [] del arreglo está implicito en el numero de datos indicados despúes
	int i, *ptr;
	
	//asignamos la dirección del arreglo al apuntador
	ptr = &var;
	
	for(i=0;i<Max;i++)
	{
		printf("La dirección de la variable var[%d] = %x\n",i,ptr);
		printf("Valor de la variable var[%d] = %d \n",i,*ptr);
		//nos movemos a la siguiente posición en la memoria
		ptr++;
	}
	return 0;

}
