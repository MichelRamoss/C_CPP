#include<stdio.h>
#include <math.h>

float resultado(float x,int n);

int main()
{
    int n;
    float x,k,l,rlnf=0;
    do{
    printf("1/2 del logaritmo natural de (1+x/1-x) mediante iteracciones... \nSiempre y cuando x sea mayor a -1 y menor a 1\n");
    printf("\nIngrese el valor de x: ");
    scanf("%f",&x);
    printf("Ingrese el numero de iteracciones: ");
    scanf("%d",&n);
    }while(x>1||x<-1||n<0);
    rlnf=resultado(x,n);
    k=1+x;
    l=1-x;
    printf("\nEl resultado de 1/2 del ln de (%.2f/%.2f) es: %.3f\n",k,l,rlnf);

    return 0;
}

float resultado(float x,int n)
{
    int i,j,den;
    float num,pot,rln=0;
    for(i=0;i<n;i++)
    {
        for(j=0,num=1,pot=0;j<(i+1);j++)
        {
            pot=(2*(j)+1);
            num=pow(x,pot);
        }
        den=(2*(i)+1);
        rln+=(num/den);
    }
    return rln;
}
