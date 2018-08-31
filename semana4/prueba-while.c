#include<stdio.h>

int main ()
{
    float C, K, ini=100, fin=200, delta;
    int n=10, op=1;

    delta=(fin-ini)/n;
    while(op==1)
    {
        K=0.;
        C=ini;
        while(C<=fin)
        {
            K=C+273.15;
            printf("%f %f \n",C,K);
            C=C+delta;
        }
        printf("Deseas hacer otra operacion? Presiona 1 para si, Presiona 0 para no \n");
        scanf("%i",&op);
    }
    return 0;
}
