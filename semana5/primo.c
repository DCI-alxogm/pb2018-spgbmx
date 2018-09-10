//Este programa indica los numeros primos que se encuentran dentro de un intervalo
//Creado por Patricia Godinez el 6 de septiembre de 2018
#include<stdio.h>

int main ()
{
    int nm, nM, primo, ar, ab, co=0, u;

    printf("Introduce hasta que numero minimo deseas saber los numeros primos: ");
    scanf("%i",&nm);
    printf("Introduce hasta que numero maximo deseas saber los numeros primos: ");
    scanf("%i",&nM);

    for (ar=nm;ar<=nM;ar++)
    {
        for(ab=2;ab<ar;ab++)
        {
            primo=1;
            if(ar%ab==0)
            {
                primo=0;
                break;
            }
        }
        if(primo!=0)
        {
            printf("%d\t",ar);
            co++;
        }
    }


}

