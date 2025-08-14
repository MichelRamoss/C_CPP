//Programacion en Ingeneria
//Practica 1
//Programa 5 - 1/2

#include<stdio.h>

int main()
{
    int i,n,den;
    float r=0,med=0;
    do{
        printf("1/2 mediante n iteracciones.\nIngrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0);
    for(i=0,den=0;i<n;i++)
    {
        den=((2*(i)+1)*(2*(i)+3));
        r=(1.0/den);
        med+=r;
    }
    printf("\n1/2 con %d iteracciones es: %f\n",n,med);
    return 0;
}
