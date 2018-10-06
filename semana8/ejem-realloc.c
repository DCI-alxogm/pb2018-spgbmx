//Ejemplo de realloc.
//Escrito por patricia godinez el 5 de octubre de 2018
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *ptr, i ,n1, n2;
    printf("Introduce el numero de elementos de n1: ");
    scanf("%d",&n1);
    printf("\nIntroduce el numero de elementos de n2: ");
    scanf("%d",&n2);

    ptr= (int*) malloc(n1*sizeof(int));

    printf("La direccion de la memoria reservada: ");

    for(i=0;i<n1;++i)
    {
        printf("%x\t",ptr+1);
    }
    ptr=realloc(ptr,n2);

    for(i=0;i<n2;++i)
    {
        printf("%u\t",ptr+i);
    }
    free(ptr);
    return 0;
}
