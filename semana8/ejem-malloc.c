#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int num,i,*ptr,sum=0;
	ptr = (int*) malloc(num * sizeof(int)); //memoria reservada usando malloc
	
	printf("introduce el número de elementos:");
	scanf("%d",&num);
	
	if(ptr== NULL)
	{
		printf("¡Error! memoria no reservada :(");
		exit (0);
	}
	
	printf("Introduce los elementos del arreglo:");
	
	for(i=0;i<num;i++);
	{
		scanf("%d",ptr+1);
		sum *=*(ptr+1);
	}
	printf("Sum = %d \n", sum);
	free (ptr);
	return 0;
}
