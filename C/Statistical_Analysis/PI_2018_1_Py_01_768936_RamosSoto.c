/*Proyecto Final - Programacion en Ingenieria
Analisis estadistico */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int Menu();
int MenuEjec(int opcion, FILE *fp);
int Minimo(float *X, int n,FILE *fp);
int Maximo (float *X, int n,FILE *fp);
int Mediana(float *X,int n,FILE *fp);
int Media(float *X,int n,FILE *fp);
int MediaGeometrica(float *X,int n,FILE *fp);
int Moda(float *X,int n,FILE *fp);
int Varianza(float *X, float media, int n,FILE *fp);
int Desviacion(float varianza,float mediana,float media,FILE *fp);
int CoeficienteVariacion(float desviacion,float mediana, FILE *fp);
int Cuartiles(float *X,int n, FILE *fp);
int Deciles(float *X, int n, FILE *fp);
int Percentiles(float *X, int n, FILE *fp);
int Momento_descentrado(float *valores,int *cantidad,int c);
int Momento_centrado(float aux,float aux2,int count, float *valores,int *cantidad,int c);
int *leer(int *n);
int guardar(float *X,int n);
int momentoestandar(float desviacion,float media,FILE *fp);

int main(int argc,const char * argv[])
{
    printf("     Programacion en Ingeniria\n     Proyecto Final\n\n");
    FILE *fp;
    fp = fopen("Datos.txt", "wt");
    int opcion;
    do
    {
       opcion = Menu();
       opcion = MenuEjec(opcion,fp);

       printf("\n\nPara continuar, presiona <Enter>.");
       getchar();
       getchar();
    } while (opcion);
    fclose(fp);

    return 0;
}

int Menu()
{
    int eleccion;
    do
    {
        printf("\n     Analisis Estadisticos de Datos\n\n");
        printf("Elija una de las opciones siguientes:\n");
        printf("\n1. Datos Ingresados por Usuario");
        printf("\n2: Datos Generados Automaticamente");
        printf("\n3: Leidos desde un archivo");
        printf("\n\n0. SALIR.");

        printf("\n\n");
        scanf("%d",&eleccion); fflush(stdin);
   } while ((eleccion < 0) || (eleccion > 2));

   return eleccion;
}

int MenuEjec(int opcion, FILE *fp)
{
    int max,min,n,i,k,b,m
    ;
    float menor,men,*X,*valores,*val;
    int *frec,*cantidad,*can;
    switch(opcion)
       {
        case 1:
            do {
                printf("\nIntroduce el numero de elementos: \n");
                scanf("%d",&n);
            }while(n<1);
            printf("Introduce los valores uno por uno: \n");
            X=(float*)malloc((n+1)*sizeof(float));
        	
            fprintf(fp,"Vector Obtenido\n");
            for(i=0;i<n;i++)
                {
                    printf("[%d]: ",i+1);
                    scanf("%f",&X[i]);
                    fprintf(fp,"V[%d] = %f\n",i+1,X[i]);
                }
            for (m=0; m<n; m++)
            {
                men=X[m];
                for (k=m+1; k<n; k++)
                {
                    if (X[k] < men)
                    {
                        men = X[k];
                        X[k] = X[m];
                        X[m] = men;
                    }
                }
            }
            printf("\n\nElementos ordenados:\n");
            fprintf(fp,"\nVector Ordenado\n");
            for (b=0; b<n; b++)
            {
                printf("%f ",X[b]);
                fprintf(fp,"V[%d] = %f\n",b+1,X[b]);
            }


            Maximo(X,n,fp);
            Minimo(X,n,fp);
            Media(X,n,fp);
            MediaGeometrica(X,n,fp);
            Mediana(X,n,fp);
            Moda(X,n,fp);
            Cuartiles(X,n,fp);
            Deciles(X,n,fp);
            Percentiles(X,n,fp);
            //Momento_descentrado(X,n,fp);
			//momentoestandar(X,n,fp);
            free(X);
            break;
        case 2:
            srand((long int)time(NULL));
            do {
                printf("\nIngrese el numero de elementos: ");
                scanf("%d", &n);
            } while (n<1);
            printf("Ingrese el rango maximo: ");
            scanf("%d", &max);
            printf("Ingrese el rango minimo: ");
            scanf("%d", &min);
            if (max < min)
            {
                max = max + min;
                min = max - min;
                max = max - min;
            }
            X = (float*)malloc(n*sizeof(float));
            fprintf(fp,"Vector Obtenido\n");
            for (i = 0; i < n; i++)
            {
                X[i] = (float)(((max - min)*(1.0*rand()) / RAND_MAX) + min);
                printf("X[%d] = %f\n", i+1, X[i]);
                fprintf(fp,"V[%d] = %f\n",i+1,X[i]);
            }
            for (m=0; m<n; m++)
            {
                menor=X[m];
                for (k=m+1; k<n; k++)
                {
                    if (X[k] < menor)
                    {
                        menor = X[k];
                        X[k] = X[m];
                        X[m] = menor;
                    }
                }
            }
            printf("\n\nElementos ordenados:\n");
            fprintf(fp,"\nVector Ordenado\n");
            for (b=0; b<n; b++)
            {
                printf("%f ",X[b]);
                fprintf(fp,"V[%d] = %f\n",b+1,X[b]);
            }

            Maximo(X,n,fp);
            Minimo(X,n,fp);
            Media(X,n,fp);
            MediaGeometrica(X,n,fp);
            Mediana(X,n,fp);
            Moda(X,n,fp);
            Cuartiles(X,n,fp);
            Deciles(X,n,fp);
            Percentiles(X,n,fp);
            //Momento_descentrado(X,n,fp);
			//momentoestandar(X,n,fp);
			//printf("aui %f",X[1]);
            free(X);
            //printf("aqui %f",X[1]);
            
            break;
            
            case 3:
            //int *leer(int *n);
			break;	
            	
        default:
            printf("\nVerificando...\n");
            printf("Salir. <0> Continuar <1> ");
            scanf("%d", &opcion); fflush(stdin);
            if (opcion == 0) printf("\nSee you soon...");
       }
    return opcion;
}

int Minimo(float *X, int n,FILE *fp)
{
    int i,j;
    float min,aux;
    for(i=0;i<n-1;i++)
       for(j=i+1;j<n;j++)
       if(X[j] > X[i])
    {
     aux=*(X+i);
     *(X+i)=*(X+j);
     *(X+j)=aux;
    }
    for(i=0;i<n;i++){
        min=*(X+(n-1));
    }
    printf("\nEl Valor Minimo es: %f",min);
    fprintf(fp,"\nEl Valor Minimo es: %f",min);
    return 0;
}

int Maximo (float *X, int n,FILE *fp)
{
    int i;
    float max;
    for (i=0;i<n;i++)
    {
      max=*(X+(n-1));
    }
    printf("\nEl Valor Maximo es: %f",max);
    fprintf(fp,"\nEl Valor Maximo es: %f",max);
    return 0;
}

int Mediana(float *X,int n,FILE *fp)
{
    int i,p,p2;
    float mediana;
    for(i=0;i<n;i++)
    {
        if(n%2 != 0)
        {
            p=((n+1)/2)-1;
            mediana=*(X+p);
        }else{
            p=(n/2);
            p2=((n)/2)-1;
            mediana=(*(X+p2)+*(X+p))/2;
            }
    }
    printf("\nLa Mediana es: %f\n", mediana);
    fprintf(fp,"\nLa Mediana es: %f\n", mediana);
    return 0;
}

int Media(float *X,int n,FILE *fp)
{
    int i;
    float media,*p_media;
    for(i=0,media=0;i<n;i++)
        {
            media+=*(X+i);
        }
        media /=n;
        p_media=&media;
        printf("\nLa Media Aritmetica es: %f", *p_media);
        fprintf(fp,"\nLa Media Aritmetica es: %f", *p_media);
        Varianza(X,media,n,fp);
    return 0;
}

int MediaGeometrica(float *X,int n,FILE *fp)
{
    int i;
    float mediageo;
    for(i=0,mediageo=1;i<n;i++)
        {
            mediageo *=*(X+i);
        }
    if(mediageo<0)
        {
            mediageo*=-1;
            mediageo=pow(mediageo,(1/n));
            mediageo*=-1;
        }
    else{
            mediageo=pow(mediageo,(1/n));
        }
    printf("\nLa Media Geometrica es: %f", mediageo);
    fprintf(fp,"\nLa Media Geometrica es: %f", mediageo);
    return 0;
}

int Moda(float *X,int n,FILE *fp)
{
	int c=0,c1=0,d,j,i;
	float max;
	int frec[n],*cantidad,*can;
	float *valores,*val;
	
	valores=(float*)malloc(n*sizeof(float));
	cantidad=(int*)malloc(n*sizeof(int));
	val=(float*)malloc((n)*sizeof(float));
    can=(int*)malloc((n)*sizeof(int));
	
	//se realiza un mapeo en el mismo arreglo X en la siguiente configuración
	//0-1
	//0-2
	//1-2
	//0-3
	//1-3
	//2-3
	//0-4
	//1-4...
	//con el objetivo de realizar una comparación y hacer un conteo al ser iguales las
	//cantidades X[i]==X[j]... teniendo como contador la variable C guardandola en el vector frec 
	
	for(i=0;i<=n;i++) 
	{	
		for (j=0;j<=n;j++)
		{	
			if(X[i]==X[j])
			{
				c=c+1; //cada que verdadera la sentencia este suma un 1 al contador c
		    }
		}
	
	frec[i]=c;
	c=0; //se reinicia ya que al saltr al siguiente valor en i se necesia en cero		
	}
	
	
	
	//como estos espacios en los arrays "valores" y "cantidad" van a funcionar de valor comparador
	//entonces toman el valor inicial tanto de "X" y "frec" ya que estos valores no tiene otro dato antes para hacer
	//una comparación
	valores[0]=X[0];
	cantidad[0]=frec[0];
	
	for(i=1;i<=n;i++) 
	{	
		d=0;  //cada ciclo de i debe de estar en cero esta variable debido que es una bandera que solo permite entrar un valor al array "valores"
		for (j=0;j<=i-1;j++)
		{
			if(X[i]==X[j]) //indica que si estos dos arreglos son iguales, entoncs se activa la bandera d en 1
			{
				d=1;	
		    }
		   	
		    if(d==0 && j+1==i) //si la bandera es cero, entonces accedera al condicional, sin embargo se debde de cumplir la segunda condicion, como j e i estan defasados
		                       //como se observa en i=1 y j=0, entonces es l razon de tener j+1 pra q se cumpla l igualdad ya que esta condicion indica que este acceso se realizra
		                       //cuando j se un valor menos de i, ya que si se coloca completamente j faltaria un valor del array
		    {
		    	c=c+1;     //este contador permite crear los espacios donde se colocara el valor de "X" y "frec" en los arrays "valores y "cantiadad"
		    	valores[c]=X[i];
		    	cantidad[c]=frec[i];		
			}
		}		
	}
	/*
	al termino de este ciclo solo se obtiene dos arrays donde se tiene el valor y la frecuancia de dicho valor
	*/
	
	/*
	en el siguiente ciclo se pretende encontrar el valor maximo dentro de la frecuencia de aparicion del dato, ya que el valor maximo
	correspondera la moda, por lo que se toma el primer valor de la lista de "cantidad" como punto de partida, pasandolo a la varible max
	*/
	
	max=cantidad[0];
	for(i=1;i<=c;i++)//el bucle se inicia en 1 debido a que el valor 0 ya se ocupo con "cantidad[0]
	{
		if(max<=cantidad[i]) //aqui se busca compara el valor Max con un "cantidad[i], de ser verdad, este valor se pasa a la variables max para asi llegar al punto de tener el valor maximo
		{
			max=cantidad[i];
		}
	}
	/*printf("Max: %f \n",max);
	/*
	una ves obtenido el valor maximo dentro de la frecuancia de datos, se procede a obtener el valor de la moda, es decir el valor que corresponde a el valor(s) maximo(s)
	donde se realiza un mapeo del vector de cantidad donde se tiene las frecuencias con el variable max
	al identificarse que existe un igualdad estos se guardan en un nuveo array, ya que puede ser mas de un valor para la moda
	*/
	for(i=0;i<=c-1;i++)
	{
		if(cantidad[i]==max)
		{
			c1=c1+1; 	 //este contador permite crear los espacios donde se colocara el valor de "cantidad" y "valores" en los arrays "val y "can"
			can[c1]=cantidad[i];
			val[c1]=valores[i];
		}
	}
	
	/*
	finalmente se imprimen los valores de la moda
	*/
	//printf("%d\n",c1);
	printf("Moda: Valor - Cantidad\n");
	
	for(i=1;i<=c1;i++)
	{	
		printf("     %f     %d\n",val[i],can[i]);
	}
	
	Momento_descentrado(valores,cantidad,c);
	//liberacion de memoria
	free(valores);
	free(cantidad);
	free(val);
	free(can);
}

int Varianza(float *X, float media, int n,FILE *fp)
{
    int i;
    float varianza,vr;
    for(i=0,varianza=0,vr=0;i<n;i++)
    {
        varianza=(*(X+i))-(media);
        varianza=pow(varianza,2);
        vr+=varianza;
    }
    vr/=n;
    printf("\nLa Varianza es: %f",vr);
    fprintf(fp,"\nLa Varianza es: %f",vr);
    Desviacion(vr,media,media,fp);

    return 0;
}

int Desviacion(float varianza,float mediana,float media,FILE *fp)
   {
        float desviacion;
        desviacion=sqrt(varianza);
        printf("\nLa Desviacion Estandar es: %f",desviacion);
        fprintf(fp,"\nLa Desviacion Estandar es: %f",desviacion);
        CoeficienteVariacion(desviacion,mediana,fp);
        momentoestandar(desviacion,media,fp);
    return 0;
}

int CoeficienteVariacion(float desviacion,float mediana, FILE *fp)
{
    float coevar;
    coevar=desviacion/mediana;
    printf("\nEl Coeficiente de Variacion es: %f",coevar);
    fprintf(fp,"\nEl Coeficiente de Variacion es: %f",coevar);
    return 0;
}

int momentoestandar(float desviacion,float media,FILE *fp)
{
		float Momentoestandar;
        Momentoestandar = (media / desviacion);
        printf("\nEl Momento estandar es : %f",Momentoestandar);
        fprintf(fp,"\nEl Momento estandar es: %f",Momentoestandar);
    	return 0;

}

int Cuartiles(float *X,int n, FILE *fp)
{
	float *pQ;
	int q, i;
	pQ=(float *)malloc(3*sizeof(float));
	fprintf(fp,"\nCuartiles\n");
	for(i=0;i<3;i++)
	{
		q=(i+1)*(n+1)/4;
		pQ[i]=X[q-1]+((i+1)*((X[q]-X[q-1])/4));
		printf("Cuartil %d = %f\n",i+1,pQ[i]);
		fprintf(fp,"Cuartil %d = %f\n",i+1,pQ[i]);

	}
	free(pQ);
	return 0;
}

int Deciles(float *X, int n, FILE *fp)
{
	float *pD;
	int q, i;
	pD=(float *)malloc(9*sizeof(float));
	fprintf(fp,"\nDeciles\n");
	for(i=0;i<9;i++)
	{
		q=(i+1)*(n+1)/10;
		pD[i]=X[q-1]+((i+1)*((X[q]-X[q-1])/10));
		printf("Decil %d = %f\n",i+1,pD[i]);
		fprintf(fp,"Decil %d = %f\n",i+1,pD[i]);
	}
	free(pD);
	return 0;
}

int Percentiles(float *X, int n, FILE *fp)
{
	float *pP;
	int q, i;
	pP=(float *)malloc(99*sizeof(float));
	fprintf(fp,"\nPercentiles\n");
	for(i=0;i<99;i++)
	{
		q=(i+1)*(n+1)/100;
		if (q <= 0)
			pP[i] = X[0] + ((i + 1)*((X[0] - X[0]) / 100));
		else if (q>=n)
			pP[i] = X[n - 1] + ((i + 1)*((X[n - 1] - X[n - 1]) / 100));
		else
			pP[i] = X[q - 1] + ((i + 1)*((X[q] - X[q - 1]) / 100));
        printf("Percentil %d = %f\n",i+1,pP[i]);
		fprintf(fp,"Percentil %d = %f\n",i+1,pP[i]);
	}
	free(pP);
	return 0;
}

int Momento_descentrado(float *valores,int *cantidad,int c)
{
	float v1,aux=0;
	float v2,aux2=0;
	float v3,aux3=0;
	float v4,aux4=0;
	
	int count=0,i;
	
	for (i=0;i<=c-1;i++)
	{
		count=cantidad[i]+count;	
	}
	
	for(i=0;i<=c-1;i++)
	{
		v1=valores[i]*cantidad[i];//MD1
		aux=v1+aux;
		v2=valores[i]*valores[i]*cantidad[i];//MD2
		aux2=v2+aux2;
		v3=valores[i]*valores[i]*valores[i]*cantidad[i];//MD3
		aux3=v3+aux3;
		v4=valores[i]*valores[i]*valores[i]*valores[i]*cantidad[i];//MD4
		aux4=v4+aux4;
	}
	printf("Momento descentrado de Grado 0: 1\n");
	printf("Momento descentrado de Grado 1: %f\n",aux/count);
	printf("Momento descentrado de Grado 2: %f\n",aux2/count);
	printf("Momento descentrado de Grado 3: %f\n",aux3/count);
	printf("Momento descentrado de Grado 4: %f\n",aux4/count);
	Momento_centrado(aux,aux2,count,valores,cantidad,c);
}

int Momento_centrado(float aux,float aux2,int count, float *valores,int *cantidad,int c)
{
	float v3=0,v4=0;
	float caux=0,caux1=0;
	int i;
	printf("Momento centrado de Grado 0: 1\n");	
	printf("Momento centrado de Grado 1: 0\n");
	printf("Momento centrado de Grado 2: %f\n",(aux2/count)-((aux/count)*(aux/count)));
	//media es aux
	
	for (i=0;i<=c-1;i++)
	{
		v3=(valores[i]-(aux/count))*(valores[i]-(aux/count))*(valores[i]-(aux/count))*cantidad[i];
		caux=v3+caux;	
	}
	printf("Momento centrado de Grado 3: %f\n",caux/count);

	for(i=0;i<=c-1;i++)
	{
		v4=(valores[i]-(aux/count))*(valores[i]-(aux/count))*(valores[i]-(aux/count))*(valores[i]-(aux/count))*cantidad[i];
		caux1=v4+caux1;	
	}
	printf("Momento centrado de Grado 4: %f\n",caux1/count);	
	
}

int guardar(float *X,int n){
	/*
	 FILE *fp;
    int i;
    fp=fopen(arch, "wt");
    if(fp==NULL)
        return 1;
    fprintf(fp, "%d\n", n);
    for(i=0; i<n; i++)
        fprintf(fp, "%f\n", X[i]);
    fclose(fp);
    return 0;
    */
}

int *leer(int *n){
	/* float *X;
    FILE *fp;
    int i;
    fp=fopen(arch, "rt");
    fscanf(fp, "%d", n);
    X = (float*)malloc(*n*sizeof(float));
    if(X==NULL)
        return NULL;
    for(i=0; i<*n; i++)
        fscanf(fp, "%f", X+i);
    fclose(fp);
    return X;
*/	
}


//Es el mejor programa que he hecho
