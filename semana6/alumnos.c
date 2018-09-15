#include<stdio.h>

int main ()
{
    int i,a,b,c;
    int ma=0, fe=0, s1=0, s2=0,s3=0, s4=0, s5=0, s6=0, s7=0, s8=0, s9=0;//Todos estos van a ser contadores para poder dar un resumen de los resultados al final.
    float edad[10], sexo[10], semestre[10], promedio[10];
    float promedio_promedios, prom;

    for(i=0;i<10;i++)//ciclo para introducir todos los datos
    {
        printf("Introduce la edad del alumno %i:",i);
        scanf("%f",&edad[i]);
        for(a=0;a<1;a++)
        {
            printf("\nIntroduce el sexo del alumno: (0/1) 0=masculino 1=femenino \t");
            scanf("%f",&sexo[a]);
            for(b=0;b<1;b++)
            {
                printf("\nIntroduce el semestre que cursa el alumno:");
                scanf("%f",&semestre[b]);
                    for(c=0;c<1;c++)
                    {
                        printf("Introduce el promedio global del alumno:");
                        scanf("%f",&promedio[c]);
                        break;
                    }

            }
        }
    }


    for(a=0;a<2;a++)//Contador de alumnos y alumnas
        {
            if(sexo[a]==0)
            {
                ma++;
            }
            else
            {
               fe++;
            }
        }
    for(b=0;b<9;b++)//Contador de alumnos en cada semestre
            {
                printf("\nIntroduce el semestre que cursa el alumno:");
                scanf("%f",&semestre[b]);
                        if(semestre[b]==1)
                        {
                            s1++;
                        }
                        else if(semestre[b]==2)
                        {
                            s2++;
                        }
                        else if(semestre[b]==3)
                        {
                            s3++;
                        }
                        else if(semestre[b]==4)
                        {
                            s4++;
                        }
                        else if(semestre[b]==5)
                        {
                            s5++;
                        }
                        else if(semestre[b]==6)
                        {
                            s6++;
                        }
                        else if(semestre[b]==7)
                        {
                            s7++;
                        }
                        else if(semestre[b]==8)
                        {
                            s8++;
                        }
                        else if(semestre[b]==9)
                        {
                            s9++;
                        }

                    }
    for(c=0;c<10;c++)//Calcular promedio de calificaciones globales
    {
        prom=prom+promedio[c];
    }
    promedio_promedios=prom/10;
    printf("\nSe introdujeron un total de 10 alumnos, de los cuales son: %f hombres y %f mujeres.\n El numero total de estudiantes por semestre es: %i semestre 1, %i semestre 2, %i semestre 3, %i semestre 4, %i semestre 5, %i semestre 6, %i semestre 7, %i semestre 8, %i semestre 9.\n El promedio de calificaciones globales es: %f",ma,fe,s1,s2,s3,s4,s5,s6,s7,s8,s9,promedio_promedios);
}
