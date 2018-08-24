//Este programa nos indica si una letra es una vocal o una consonante
//Realizado por Patricia Godinez el 23 de agosto de 2018
#include<stdio.h>
int main()
{
	char c;
	int min, may;
	printf("Introduce una letra:");
	scanf("%c",&c);
	min= (c=='a'|| c=='e' || c=='i' || c=='o' || c=='u');
	may= (c=='A'|| c=='E' || c=='I' || c=='O' || c=='U');
	//min y may nos van a servir para poder identificar si la letra que fue indicada es una vocal o no utilizando el if y el else.
	if (min || may)
	{
		printf("\n %c es una vocal\n",c);
	}
	else
	{
		printf("%c es consonante \n",c);
	}
	return 0;
}
