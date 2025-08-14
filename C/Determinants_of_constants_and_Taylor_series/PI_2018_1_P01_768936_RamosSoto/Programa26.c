//Programacion en Ingeneria
//Practica 1
//Programa 26 - sinh(x)

#include <stdio.h>

int main()
{
    int n,i;
    float rsen,fact,x;
    do{
        printf("Sinh(x) mediante iteracciones.\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    for(i=0,fact=x,rsen=0.0;i<n;i++)
    {
        rsen+=fact;
        fact*=((x/(2*i+2))*(x/(2*i+3)));
    }
    printf("\nEl resultado de senh(%.3f) es: %.5f\n",x,rsen);
    return 0;
}
