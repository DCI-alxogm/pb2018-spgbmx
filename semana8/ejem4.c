//Escrito por Patricia Godinez el 5 de octubre de 2018
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int i, *num, sum=0;

    printf("Introduce 6 numeros enteros:\n");
    num= (int*) malloc(num, sizeof(int));

    for(i=0;i<6;++i);
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("suma = %d",sum);
    free(num);
    return 0;
}
