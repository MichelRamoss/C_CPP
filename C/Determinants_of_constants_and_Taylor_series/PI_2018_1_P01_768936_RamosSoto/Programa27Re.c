#include <stdio.h>
#include <math.h>

float resultado(float x,int n);

int main()
{
    int n;
    float x,rsenf;
    do{
        printf("senh^-1(x) mediante iteracciones... \nSiempre y cuando x sea menor a l \n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(x>1||n<0);
    rsenf=resultado(x,n);
    printf("El resultado de senh^-1(%.3f) es: %.6f ",x,rsenf);
    return 0;
}

float resultado(float x,int n)
{
    int i,j,den,denk,sig;
    float pot,num,numk,pf,k=1.0,rsen=0.0,rsenf=0.0;
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
        rsen+=((sig)*(k*pf));
    }
    return rsen;
}
