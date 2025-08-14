//Programacion en Ingeneria
//Practica 1
//Programa 2 - Pi/4

#include<stdio.h>

int main()
{
    int n,i,sig,den;
    float pi2=0,pi=0;
    do{
        printf("PI/4 mediante n iteracciones.\nIngrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0);
    for(i=0,den=0;i<n;i++)
    {
        sig=(1-(2*(i%2)));
        den=(2*(i)+1);
        pi2=((sig)*(1.0/den));
        pi+=pi2;
    }
    printf("\nPI/4 con %d iteracciones es: %f\n",n,pi);
    return 0;
}

