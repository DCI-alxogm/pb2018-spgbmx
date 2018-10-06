//Escrito por Patricia Godinez el 5 de octubre de 2018
//Ejemplo de uso de calloc.
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num, i, *ptr, sum=0;

    printf("Introduce el numero de elementos:");
    scanf("%d",&num);

    ptr = (int*) calloc(num, sizeof(int));

    if(ptr==NULL)
    {
        printf("Error! memoria no reservada");
        exit (0);
    }
    printf("Introducelos elementos del arreglo ");
    for(i=0;i<num;++i)
    {
        scanf("%d",ptr+i);
        sum+= *(ptr+i);
    }
    printf("Sum= %d",sum);
    free(ptr);
    return 0;
}
