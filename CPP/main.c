#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int Menu();
int MenuEjec(int opcion, FILE *fp);
int Minimo(float *X, int n,FILE *fp);
int Maximo (float *X, int n,FILE *fp);
int Mediana(float *X,int n,FILE *fp);
int Media(float *X,int n,FILE *fp);
int MediaGeometrica(float *X,int n,FILE *fp);
int Varianza(float *X, float media, int n,FILE *fp);
int Desviacion(float varianza,float mediana,FILE *fp);
int CoeficienteVariacion(float desviacion,float mediana, FILE *fp);
int Cuartiles(float *X,int n, FILE *fp);
int Deciles(float *X, int n, FILE *fp);
int Percentiles(float *X, int n, FILE *fp);

int main(void)
{
    printf("*****JORGE ERNESTO CASTILLO ALONSO*****\n***************NUA:146170**************");
    printf("\n********GABRIELA BANALES GALVAN********\n***************NUA:146200**************");
    printf("\n********GUILLERMO RAMIREZ SOLIS********\n***************NUA:146230**************\n\n");
    FILE *fp;
    fp = fopen("Resulta2.txt", "wt");
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
        printf("\n\n0. SALIR.");
        
        printf("\n\n");
        scanf("%d",&eleccion); fflush(stdin);
    } while ((eleccion < 0) || (eleccion > 2));
    
    return eleccion;
}

int MenuEjec(int opcion, FILE *fp)
{
    int max,min,n,i,k,b,m,q;
    float menor,men,*X;
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
            Cuartiles(X,n,fp);
            Deciles(X,n,fp);
            Percentiles(X,n,fp);
            
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
            Cuartiles(X,n,fp);
            Deciles(X,n,fp);
            Percentiles(X,n,fp);
            
            free(X);
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
    Desviacion(vr,media,fp);
    
    return 0;
}

int Desviacion(float varianza,float mediana,FILE *fp)
{
    float desviacion;
    desviacion=sqrt(varianza);
    printf("\nLa Desviacion Estandar es: %f",desviacion);
    fprintf(fp,"\nLa Desviacion Estandar es: %f",desviacion);
    CoeficienteVariacion(desviacion,mediana,fp);
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

