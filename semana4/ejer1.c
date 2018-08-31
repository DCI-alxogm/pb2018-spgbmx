//Este programa nos permite elegir entre dos tipos de conversiones, una vez relizados los calculos, gracias a la funcion while tenemos la posibilidad de preguntar si se desea continuar usando al programa o si se desea salir.
//Creado por Patricia Godinez el 30 de agosto de 2018
#include<stdio.h>
#include<math.h>
int main ()
{
	int opcion, C, x, y, z, op=1;
	float K, F, Ce, Cel, r, the, phi;

	while(op==1)
    {//Los siguientes printf fueron colocados aqui porque una vez que se decida si se desea repetir el programa quiero que se pueda decidir cual de las dos conversiones se desea usar.
        printf("Elige uno de los siguientes comandos \n");
        printf("(1)Si deseas calcular temperaturas \t");
        printf("(2)Si deseas convertir coordenadas \n");
        scanf("%i",&opcion);
        switch(opcion)//Aqui voy a utilizar el programa de la semana3 llamado 2a.c
        {
            case 1 :
                printf("Introduce una temperatura en grados celcius:");
                scanf("%i",&C);
                F=(C*1.8)+32;
                K=C+273.15;
                printf("\nLa temperatura en grados Fahrenheit es : %f",F);
                printf("\nLa temperatura en Kelvin es : %f \n",K);
                Ce=(F-32)/1.8;
                Cel=K-273.15;
                printf("Convirtiendo de vuelta los Farhenheit a Celcius : %f \n",Ce);
                printf("Convirtiendo de vuelta los Kelvin a Celcius : %f \n",Cel);
                printf("¿Deseas hacer otra operacion? Presiona (1/0) \t 1=si \t 0=no \n");//Esta es la unica diferencia de 2a.c, esto es la parte de la funcion while que nos permite volver a iniciar el programa o salir de este.
                scanf("%i",&op);
                break;
            case 2 :
                printf("Introduce x:");
                scanf("%i",&x);
                printf(" \nIntroduce y:");
                scanf("%i",&y);
                printf(" \nIntroduce z:");
                scanf("%i",&z);

                r=(sqrt((x*x)+(y*y)+(z*z)));
                the=(acos((z/r)));//Esta operacion puede tener errores al momento de ejecutar el programa, ya que se utiliza el arcocoseno.
                phi=(atan((y/x)));

                printf("\nr= %f \t",r);
                printf("teta= %f",the);
                printf("\tphi= %f \n",phi);
                printf("¿Deseas hacer otra operacion? Presiona (1/0) \t 1=si \t 0=no \n");//Aqui ocurre lo mismo que en el case 1.
                scanf("%i",&op);
                break;
        }
    }
}
