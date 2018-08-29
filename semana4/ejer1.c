#include<stdio.h>
#include<math.h>
int main ()
{
	int opcion, C, x, y, z;
	float K, F, Ce, Cel, r, the, phi;
	printf("Elige uno de los siguientes comandos \n");
	printf("(1)Si deseas calcular temperaturas \t");
	printf("(2)Si deseas convertir coordenadas \n");
	scanf("%i",&opcion);
	
	switch(opcion)
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
                    while()
		    {
		    	printf("¿Deseas hacer otra conversión?\t Presiona 1 para 'sí'\t Presiona 0 para 'no'");
		    
		    }

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
                    break;
	}

}
