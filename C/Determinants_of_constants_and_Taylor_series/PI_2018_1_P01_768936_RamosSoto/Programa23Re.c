//Programacion en Ingeneria
//Practica 1
//Programa 23 - sin^-1(x)

#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,den = 0,denk = 0,n;
    float x,pot,num = 0.0,numk = 0.0,pf,k=1.0,rsen=0.0,rsenf=0.0;
    do{
        printf("Sen^-1(x) mediante iteracciones... \nSiempre y cuando x sea menor a l \n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(x>1||n<0);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            numk=((2*(j)+1));
            denk=((2*(j)+2));
            pot=((2*(j)+1));
            num=pow(x,pot);
            den=((2*(j)+1));
        }
        k*=(numk/denk);
        pf=(num/den);
        rsen=(k*pf);
        rsenf+=rsen;
    }
    printf("El resultado de sen^-1(%.3f) es: %.6f ",x,rsenf);
    return 0;
}
