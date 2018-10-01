//Este programa calcula las coordenadas de un planeta conforme gira alrededor del Sol.
//Creado por Patricia Godinez el 26 de Septiembre de 2018.
#include<stdio.h>
#include<math.h>

int main ()
{
    //Calculos para la Tierra.
    float x[366], y[366], z[366], r[366], vx[366], vy[366], vz[366], vv[366];
    int i,h,M,hMax;
    float G;
    G=0.00029592;

    //Leyendo el archivo con los datos de la Tierra.
    FILE *plan;
    FILE *tier;
	plan=fopen("planetasT.txt","r");
	fscanf(plan,"%f %f %f %f %f %f %i %i %i",&x[0],&y[0],&z[0],&vx[0],&vy[0],&vz[0],&h,&M,&hMax);
	fclose(plan);
    printf("TIERRA=%f %f %f %f %f %f %i %i %i\n",x[0],y[0],z[0],vx[0],vy[0],vz[0],h,M,hMax);


	for(i=0;i<hMax;i++)
    {
        //Calculando las magnitudes de los vectores.
        r[i]= sqrt(pow(x[i],2)+pow(y[i],2)+pow(z[i],2));
        vv[i]= sqrt(pow(vx[i],2)+pow(vy[i],2)+pow(vz[i],2));
        //Calculando los componentes del vector velocidad.
        vx[i+1]=vx[i]-h*(G*M*x[i]/pow(r[i],3));
        vy[i+1]=vy[i]-h*(G*M*y[i]/pow(r[i],3));
        vz[i+1]=vz[i]-h*(G*M*z[i]/pow(r[i],3));
        //Calculando las coordenadas del planeta.
        x[i+1]=x[i]+vx[i]*h;
        y[i+1]=y[i]+vy[i]*h;
        z[i+1]=z[i]+vz[i]*h;

       //printf(" (%f, %f, %f) v = %f \n", x[i], y[i], z[i], vv[i]);
    }

    //Escribiendo archivo con resultados.
    tier=fopen("tierra.txt","w");
    fprintf(tier,"x\t y\t z\t vx\t vy\t vz\t [v]\n");
    for(i=0;i<hMax;i++)
    {
        fprintf(tier,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",x[i],y[i],z[i],vx[i],vy[i],vz[i],vv[i]);
    }
    fclose(tier);

    //Calculos para Mercurio.
    float xMe[89], yMe[89], zMe[89], rMe[89], vxMe[89], vyMe[89], vzMe[89], vvMe[89];
    //Leyendo el archivo con los datos de Mercurio.
    FILE *planMe;
    FILE *mer;
	planMe=fopen("planetasMe.txt","r");
	fscanf(planMe,"%f %f %f %f %f %f %i %i %i",&xMe[0],&yMe[0],&zMe[0],&vxMe[0],&vyMe[0],&vzMe[0],&h,&M,&hMax);
	fclose(planMe);
    printf("MERCURIO=%f %f %f %f %f %f %i %i %i\n",xMe[0],yMe[0],zMe[0],vxMe[0],vyMe[0],vzMe[0],h,M,hMax);

	for(i=0;i<hMax;i++)
    {
        //Calculando las magnitudes de los vectores.
        rMe[i]= sqrt(pow(xMe[i],2)+pow(yMe[i],2)+pow(zMe[i],2));
        vvMe[i]= sqrt(pow(vxMe[i],2)+pow(vyMe[i],2)+pow(vzMe[i],2));
        //Calculando los componentes del vector velocidad.
        vxMe[i+1]=vxMe[i]-h*(G*M*xMe[i]/pow(rMe[i],3));
        vyMe[i+1]=vyMe[i]-h*(G*M*yMe[i]/pow(rMe[i],3));
        vzMe[i+1]=vzMe[i]-h*(G*M*zMe[i]/pow(rMe[i],3));
        //Calculando las coordenadas del planeta.
        xMe[i+1]=xMe[i]+vxMe[i]*h;
        yMe[i+1]=yMe[i]+vyMe[i]*h;
        zMe[i+1]=zMe[i]+vzMe[i]*h;

       //printf(" (%f, %f, %f) v = %f \n", x[i], y[i], z[i], vv[i]);    //Printf provisional.
    }

    //Escribiendo archivo con resultados.
    mer=fopen("mercurio.txt","w");
    fprintf(mer,"x\t y\t z\t vx\t vy\t vz\t [v]\n");
    for(i=0;i<hMax;i++)
    {
        fprintf(mer,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",xMe[i],yMe[i],zMe[i],vxMe[i],vyMe[i],vzMe[i],vvMe[i]);
    }
    fclose(mer);


    //Calculos para Venus.
    float xVe[225], yVe[225], zVe[225], rVe[225], vxVe[225], vyVe[225], vzVe[225], vvVe[225];
    //Leyendo el archivo con los datos de Venus.
    FILE *planVe;
    FILE *ven;
	planVe=fopen("planetasVe.txt","r");
	fscanf(planVe,"%f %f %f %f %f %f %i %i %i",&xVe[0],&yVe[0],&zVe[0],&vxVe[0],&vyVe[0],&vzVe[0],&h,&M,&hMax);
	fclose(planVe);
    printf("VENUS=%f %f %f %f %f %f %i %i %i\n",xVe[0],yVe[0],zVe[0],vxVe[0],vyVe[0],vzVe[0],h,M,hMax);

	for(i=0;i<hMax;i++)
    {
        //Calculando las magnitudes de los vectores.
        rVe[i]= sqrt(pow(xVe[i],2)+pow(yVe[i],2)+pow(zVe[i],2));
        vvVe[i]= sqrt(pow(vxVe[i],2)+pow(vyVe[i],2)+pow(vzVe[i],2));
        //Calculando los componentes del vector velocidad.
        vxVe[i+1]=vxVe[i]-h*(G*M*xVe[i]/pow(rVe[i],3));
        vyVe[i+1]=vyVe[i]-h*(G*M*yVe[i]/pow(rVe[i],3));
        vzVe[i+1]=vzVe[i]-h*(G*M*zVe[i]/pow(rVe[i],3));
        //Calculando las coordenadas del planeta.
        xVe[i+1]=xVe[i]+vxVe[i]*h;
        yVe[i+1]=yVe[i]+vyVe[i]*h;
        zVe[i+1]=zVe[i]+vzVe[i]*h;

       //printf(" (%f, %f, %f) v = %f \n", x[i], y[i], z[i], vv[i]);    //Printf provisional.
    }

    //Escribiendo archivo con resultados.
    ven=fopen("venus.txt","w");
    fprintf(ven,"x\t y\t z\t vx\t vy\t vz\t [v]\n");
    for(i=0;i<hMax;i++)
    {
        fprintf(ven,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",xVe[i],yVe[i],zVe[i],vxVe[i],vyVe[i],vzVe[i],vvVe[i]);
    }
    fclose(ven);


    //Calculos para Marte.
    float xMa[688], yMa[688], zMa[688], rMa[688], vxMa[688], vyMa[688], vzMa[688], vvMa[688];
    //Leyendo el archivo con los datos de Marte.
    FILE *planMa;
    FILE *mar;
	planMa=fopen("planetasMa.txt","r");
	fscanf(planMa,"%f %f %f %f %f %f %i %i %i",&xMa[0],&yMa[0],&zMa[0],&vxMa[0],&vyMa[0],&vzMa[0],&h,&M,&hMax);
	fclose(planMa);
    printf("MARTE=%f %f %f %f %f %f %i %i %i\n",xMa[0],yMa[0],zMa[0],vxMa[0],vyMa[0],vzMa[0],h,M,hMax);

	for(i=0;i<hMax;i++)
    {
        //Calculando las magnitudes de los vectores.
        rMa[i]= sqrt(pow(xMa[i],2)+pow(yMa[i],2)+pow(zMa[i],2));
        vvMa[i]= sqrt(pow(vxMa[i],2)+pow(vyMa[i],2)+pow(vzMa[i],2));
        //Calculando los componentes del vector velocidad.
        vxMa[i+1]=vxMa[i]-h*(G*M*xMa[i]/pow(rMa[i],3));
        vyMa[i+1]=vyMa[i]-h*(G*M*yMa[i]/pow(rMa[i],3));
        vzMa[i+1]=vzMa[i]-h*(G*M*zMa[i]/pow(rMa[i],3));
        //Calculando las coordenadas del planeta.
        xMa[i+1]=xMa[i]+vxMa[i]*h;
        yMa[i+1]=yMa[i]+vyMa[i]*h;
        zMa[i+1]=zMa[i]+vzMa[i]*h;

       //printf(" (%f, %f, %f) v = %f \n", x[i], y[i], z[i], vv[i]);    //Printf provisional.
    }

    //Escribiendo archivo con resultados.
    mar=fopen("marte.txt","w");
    fprintf(mar,"x\t y\t z\t vx\t vy\t vz\t [v]\n");
    for(i=0;i<hMax;i++)
    {
        fprintf(mar,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",xMa[i],yMa[i],zMa[i],vxMa[i],vyMa[i],vzMa[i],vvMa[i]);
    }
    fclose(mar);


    //Calculos para Jupiter.
    float xJu[4393], yJu[4393], zJu[4393], rJu[4393], vxJu[4393], vyJu[4393], vzJu[4393], vvJu[4393];
    FILE *planJu;
    FILE *ju;
	planJu=fopen("planetasJu.txt","r");
	fscanf(planJu,"%f %f %f %f %f %f %i %i %i",&xJu[0],&yJu[0],&zJu[0],&vxJu[0],&vyJu[0],&vzJu[0],&h,&M,&hMax);
	fclose(planJu);
    printf("JUPITER=%f %f %f %f %f %f %i %i %i\n",xJu[0],yJu[0],zJu[0],vxJu[0],vyJu[0],vzJu[0],h,M,hMax);

	for(i=0;i<hMax;i++)
    {
        //Calculando las magnitudes de los vectores.
        rJu[i]= sqrt(pow(xJu[i],2)+pow(yJu[i],2)+pow(zJu[i],2));
        vvJu[i]= sqrt(pow(vxJu[i],2)+pow(vyJu[i],2)+pow(vzJu[i],2));
        //Calculando los componentes del vector velocidad.
        vxJu[i+1]=vxJu[i]-h*(G*M*xJu[i]/pow(rJu[i],3));
        vyJu[i+1]=vyJu[i]-h*(G*M*yJu[i]/pow(rJu[i],3));
        vzJu[i+1]=vzJu[i]-h*(G*M*zJu[i]/pow(rJu[i],3));
        //Calculando las coordenadas del planeta.
        xJu[i+1]=xJu[i]+vxJu[i]*h;
        yJu[i+1]=yJu[i]+vyJu[i]*h;
        zJu[i+1]=zJu[i]+vzJu[i]*h;

       //printf(" (%f, %f, %f) v = %f \n", x[i], y[i], z[i], vv[i]);    //Printf provisional.
    }

    //Escribiendo archivo con resultados.
    ju=fopen("jupiter.txt","w");
    fprintf(ju,"x\t y\t z\t vx\t vy\t vz\t [v]\n");
    for(i=0;i<hMax;i++)
    {
        fprintf(ju,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",xJu[i],yJu[i],zJu[i],vxJu[i],vyJu[i],vzJu[i],vvJu[i]);
    }
    fclose(ju);



    //Calculos para Saturno.
    float xSa[10615], ySa[10615], zSa[10615], rSa[10615], vxSa[10615], vySa[10615], vzSa[10615], vvSa[10615];
    FILE *planSa;
    FILE *sa;
	planSa=fopen("planetasSa.txt","r");
	fscanf(planSa,"%f %f %f %f %f %f %i %i %i",&xSa[0],&ySa[0],&zSa[0],&vxSa[0],&vySa[0],&vzSa[0],&h,&M,&hMax);
	fclose(planSa);
    printf("SATURNO=%f %f %f %f %f %f %i %i %i\n",xSa[0],ySa[0],zSa[0],vxSa[0],vySa[0],vzSa[0],h,M,hMax);

	for(i=0;i<hMax;i++)
    {
        //Calculando las magnitudes de los vectores.
        rSa[i]= sqrt(pow(xSa[i],2)+pow(ySa[i],2)+pow(zSa[i],2));
        vvSa[i]= sqrt(pow(vxSa[i],2)+pow(vySa[i],2)+pow(vzSa[i],2));
        //Calculando los componentes del vector velocidad.
        vxSa[i+1]=vxSa[i]-h*(G*M*xSa[i]/pow(rSa[i],3));
        vySa[i+1]=vySa[i]-h*(G*M*ySa[i]/pow(rSa[i],3));
        vzSa[i+1]=vzSa[i]-h*(G*M*zSa[i]/pow(rSa[i],3));
        //Calculando las coordenadas del planeta.
        xSa[i+1]=xSa[i]+vxSa[i]*h;
        ySa[i+1]=ySa[i]+vySa[i]*h;
        zSa[i+1]=zSa[i]+vzSa[i]*h;

       //printf(" (%f, %f, %f) v = %f \n", x[i], y[i], z[i], vv[i]);    //Printf provisional.
    }

    //Escribiendo archivo con resultados.
    sa=fopen("saturno.txt","w");
    fprintf(sa,"x\t y\t z\t vx\t vy\t vz\t [v]\n");
    for(i=0;i<hMax;i++)
    {
        fprintf(sa,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",xSa[i],ySa[i],zSa[i],vxSa[i],vySa[i],vzSa[i],vvSa[i]);
    }
    fclose(sa);


    //Calculos para Urano.
    float xur[30745], yur[30745], zur[30745], rur[30745], vxur[30745], vyur[30745], vzur[30745], vvur[30745];

    //Leyendo el archivo con los datos de Urano.
    FILE *planur;
    FILE *ur;
	planur=fopen("planetasUr.txt","r");
	fscanf(planur,"%f %f %f %f %f %f %i %i %i",&xur[0],&yur[0],&zur[0],&vxur[0],&vyur[0],&vzur[0],&h,&M,&hMax);
	fclose(planur);
    printf("URANO=%f %f %f %f %f %f %i %i %i\n",xur[0],yur[0],zur[0],vxur[0],vyur[0],vzur[0],h,M,hMax);


	for(i=0;i<hMax;i++)
    {
        //Calculando las magnitudes de los vectores.
        rur[i]= sqrt(pow(xur[i],2)+pow(yur[i],2)+pow(zur[i],2));
        vvur[i]= sqrt(pow(vxur[i],2)+pow(vyur[i],2)+pow(vzur[i],2));
        //Calculando los componentes del vector velocidad.
        vxur[i+1]=vxur[i]-h*(G*M*xur[i]/pow(rur[i],3));
        vyur[i+1]=vyur[i]-h*(G*M*yur[i]/pow(rur[i],3));
        vzur[i+1]=vzur[i]-h*(G*M*zur[i]/pow(rur[i],3));
        //Calculando las coordenadas del planeta.
        xur[i+1]=xur[i]+vxur[i]*h;
        yur[i+1]=yur[i]+vyur[i]*h;
        zur[i+1]=zur[i]+vzur[i]*h;

       //printf(" (%f, %f, %f) v = %f \n", x[i], y[i], z[i], vv[i]);
    }

    //Escribiendo archivo con resultados.
    ur=fopen("urano.txt","w");
    fprintf(ur,"x\t y\t z\t vx\t vy\t vz\t [v]\n");
    for(i=0;i<hMax;i++)
    {
        fprintf(ur,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",xur[i],yur[i],zur[i],vxur[i],vyur[i],vzur[i],vvur[i]);
    }
    fclose(ur);


/*      //Error al leer el archivo.
    //Calculos para Neptuno.
    float xNe[60025], yNe[60025], zNe[60025], rNe[60025], vxNe[60025], vyNe[60025], vzNe[60025], vvNe[60025];
    //Leyendo el archivo con los datos de Neptuno.
    FILE *planNe;
    FILE *ne;
	planNe=fopen("planetasNe.txt","r");
	fscanf(planNe,"%f %f %f %f %f %f %i %i %i",&xNe[0],&yNe[0],&zNe[0],&vxNe[0],&vyNe[0],&vzNe[0],&h,&M,&hMax);
	fclose(planNe);
    printf("NEPTUNO=%f %f %f %f %f %f %i %i %i\n",xNe[0],yNe[0],zNe[0],vxNe[0],vyNe[0],vzNe[0],h,M,hMax);


	for(i=0;i<hMax;i++)
    {
        //Calculando las magnitudes de los vectores.
        rNe[i]= sqrt(pow(xNe[i],2)+pow(yNe[i],2)+pow(zNe[i],2));
        vvNe[i]= sqrt(pow(vxNe[i],2)+pow(vyNe[i],2)+pow(vzNe[i],2));
        //Calculando los componentes del vector velocidad.
        vxNe[i+1]=vxNe[i]-h*(G*M*xNe[i]/pow(rNe[i],3));
        vyNe[i+1]=vyNe[i]-h*(G*M*yNe[i]/pow(rNe[i],3));
        vzNe[i+1]=vzNe[i]-h*(G*M*zNe[i]/pow(rNe[i],3));
        //Calculando las coordenadas del planeta.
        xNe[i+1]=xNe[i]+vxNe[i]*h;
        yNe[i+1]=yNe[i]+vyNe[i]*h;
        zNe[i+1]=zNe[i]+vzNe[i]*h;

       //printf(" (%f, %f, %f) v = %f \n", x[i], y[i], z[i], vv[i]);
    }

    //Escribiendo archivo con resultados.
    ne=fopen("neptuno.txt","w");
    fprintf(ne,"x\t y\t z\t vx\t vy\t vz\t [v]\n");
    for(i=0;i<hMax;i++)
    {
        fprintf(ne,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",xNe[i],yNe[i],zNe[i],vxNe[i],vyNe[i],vzNe[i],vvNe[i]);
    }
    fclose(ne);
    */

}


