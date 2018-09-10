//Este programa calcula el factorial de un numero
//Creado por Patricia Godinez el 6 de septiembre de 2018
#include<stdio.h>

int main ()
{
    int x, fa, n, op;
    op=1;
    while(op==1)
    {
        fa=1;
        printf("\nIntroduce n=");
        scanf("%i",&n);

        for(x=1;x<=n;x++)
        {
            fa=fa*x;
        }
        printf("n!=%d \n",fa);

        printf("¿Deseas hacer otro cálculo? (si/no) si=1  no=0\t");
        scanf("%i",&op);
    }

return 0;
}
