#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,den,denk,n,sig;
    float x,pot,num,numk,pf,k=1.0,rsen=0.0,rsenf=0.0;
    do{
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(x>1||n<0);
    for(i=0;i<n;i++)
    {
        sig=(1-((2)*(i%2)));
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
        rsen=((sig)*(k*pf));
        rsenf+=rsen;
    }
    printf("El resultado de senh^-1(%.3f) es: %.6f ",x,rsenf);
    return 0;
}
