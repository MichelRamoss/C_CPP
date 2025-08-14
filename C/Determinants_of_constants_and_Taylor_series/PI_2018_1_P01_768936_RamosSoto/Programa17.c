//Programacion en Ingeneria
//Practica 1
//Programa 17 - Ek

#include <stdio.h>

int main()
{
    int it, j, sig=-1, nden=3;
    float div=0, pi=1, i, num, den=1,rest, fact=1, pot=2;
    printf("Ingrese K ");
    scanf("%d", &it);
    printf("Ingrese n");
    scanf("%f", &num);
    num*=2;
    rest=num;
    for(i=1;i<=num;i++)
    {
        fact*=rest;
        rest-=1;
        pi*=3.1416;
        pot*=2;

    }
    pi*=3.1416;
    pot*=2;
    fact*=pot;
    fact/=pi;
    for (i=1;i<=it;i++)
    {
        for(j=0;j<=num;j++)
                den*=nden;
    div+=(sig*(1/den));
    den=1;
    sig*=-1;
    nden+=2;
    }
    div+=1;
    fact*=div;
    printf("%f", fact);
    return 0;

}
