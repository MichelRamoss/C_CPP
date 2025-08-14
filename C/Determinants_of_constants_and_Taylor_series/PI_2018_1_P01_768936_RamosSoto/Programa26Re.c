//Programacion en Ingeneria
//Practica 1
//Programa 26 - sinh(x) - recursivo

#include <stdio.h>

float resultado(float x,int n);

int main()
{
    int n;
    float rseno,x;
    do{
        printf("Sinh(x) mediante iteracciones\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    rseno=resultado(x,n);
    printf("\nEl resultado de senh(%.3f) es: %.5f\n",x,rseno);
    return 0;
}

float resultado(float x,int n)
{
    int i;
    float rsen,fact;
    for(i=0,fact=x,rsen=0.0;i<n;i++)
    {
        rsen+=fact;
        fact*=((x/(2*i+2))*(x/(2*i+3)));
    }
    return rsen;
}
