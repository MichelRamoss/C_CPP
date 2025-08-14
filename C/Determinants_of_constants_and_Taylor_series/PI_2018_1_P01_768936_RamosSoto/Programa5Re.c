//Programacion en Ingeneria
//Practica 1
//Programa 5 - 1/2 - recursivo

#include<stdio.h>

float resultado(int n);

int main()
{
    int n;
    float med=0;
    do{
        printf("1/2 mediante n iteracciones.\nIngrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0);
    med=resultado(n);
    printf("\n1/2 con %d iteracciones es: %f\n",n,med);
    return 0;
}

float resultado(int n)
{
    int i,den;
    float r=0;
    for(i=0,den=0;i<n;i++)
    {
        den=((2*(i)+1)*(2*(i)+3));
        r+=(1.0/den);
    }
    return r;
}
