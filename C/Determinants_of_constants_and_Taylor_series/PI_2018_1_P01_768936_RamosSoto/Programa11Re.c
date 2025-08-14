//Programacion en Ingeneria
//Practica 1
//Programa 11 - ln(x) - recursivo

#include <stdio.h>

float resultado(float x,int n);

int main()
{
    int n;
    float x,k,lnf=0;
    do{
        printf("ln(x) mediante iteracciones.\nIngresa el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(x>=1||x<-1||n<0);
    lnf=resultado(x,n);
    k = 1+x;
    printf("\nEl resultado del ln(%f) es: %f\n",k,lnf);
    
    return 0;
}

float resultado(float x,int n)
{
    int den,sig,i,j;
    float k,px,num,ln=0.0;
    for(i=0,ln=0; i<n; i++)
    {
        sig=(1-((2)*(i%2)));
        for(j=0,px=1;j<(i+1);j++)
        {
            px*=x;
        }
        num=px;
        den=(i+1);
        ln+=(sig*num)/(den);
    }
    return ln;
}
