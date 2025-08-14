#include<stdio.h>

float resultado(int n);

int main()
{
    int n;
    float rpf=0;
    do{
    printf("PI^2/6 mediante iteracciones\n");
    printf("\nIngresar el numero de iteracciones: ");
    scanf("%d",&n);
    }while(n<0);
    rpf=resultado(n);
    printf("\nEl resultado de Pi^2/6 es: %.3f\n",rpf);
    return 0;
}

float resultado(int n)
{
    int i,den;
    float rp=0;
    for(i=0,den=0;i<n;i++)
    {
        den=((i+1)*(i+1));
        rp+=(1.0/den);
    }
    return rp;
}
