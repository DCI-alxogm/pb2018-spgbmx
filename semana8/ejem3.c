//Escrito por Patricia Godinez el 5 de octubre de 2018
#include<stdio.h>

int main()
{
    int i, num[6],sum=0;
    printf("Introduce 6 numeros enteros: \n");

    for(i=0;i<6;++i)
    {
        scanf("%d",(num+i));//num+i == &num[i]
        sum+= *(num+i);//*(num+i) == num[i]
    }
    printf("suma = %d",sum);
    return 0;
}
