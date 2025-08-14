#include<stdio.h>

float resultado(int x);

int main()
{
    int x;
    float rpf=0;
    do{
    printf("Obtener el resultado de PI^2/8:\n");
    printf("\nNumero de iteracciones: ");
    scanf("%d",&x);
    }while(x<0);
    rpf=resultado(x);
    printf("\nEl resultado de Pi^2/8 es: %.3f\n",rpf);
    return 0;
}

float resultado(int x)
{
    int i,den;
    float rp=0;
    for(i=0,den=0;i<x;i++)
    {
        den=((2*(i)+1)*(2*(i)+1));
        rp+=(1.0/den);
    }
    return rp;
}





