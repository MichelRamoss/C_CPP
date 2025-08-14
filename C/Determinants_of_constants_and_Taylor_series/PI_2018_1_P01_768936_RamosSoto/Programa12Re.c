#include <stdio.h>
#include <math.h>

float resultado(float x,float a,int n);

int main()
{
    int n;
    float x,a,rafin=0.0;
    do{
    printf("a^x mediante iteracciones\n");
    printf("\nIngrese el valor a: ");
    scanf("%f",&a);
    printf("Ingrese el valor x: ");
    scanf("%f",&x);
    printf("Ingrese el numero de iteracciones: ");
    scanf("%d",&n);
    }while(n<0);
    rafin=resultado(x,a,n);
    printf("\nEl resultado de %.2f^%.2f es: %.4f\n",a,x,rafin);

    return 0;
}

float resultado(float x,float a,int n)
{
    int i,j,den,denln;
    float k,h,pot,num=1.0,numln,rln=0.0,rlnf=0.0,ra=0.0,raf=0.0,rafi=0.0;
    for(i=0;i<n;i++)
    {
        for(j=0,numln=1.0,pot=0.0,den=1,denln=1;j<i+1;j++)
        {
            pot=((2*(j))+1);
            h=(a-1.0)/(a+1.0);
            numln=pow(h,pot);
            den*=(j+1);
        }
        denln=(2*(i)+1);
        rln+=(numln/denln);
        rlnf=2.0*rln;
        k=x*rlnf;
        num*=k;
        ra=(num/den);
        raf+=ra;
        rafi=1+raf;
    }
    return rafi;
}
