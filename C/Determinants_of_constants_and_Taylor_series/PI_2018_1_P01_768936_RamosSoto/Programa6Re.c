#include<stdio.h>

float resultado(int n);

int main()
{
    int n;
    float rf=0;
    do{
    printf("3/4 mediante iteracciones\n");
    printf("\nIngrese el numero de iteracciones: ");
    scanf("%d",&n);
    }while(n<0);
    rf=resultado(n);
    printf("\nEl resultado de 3/4 es: %.3f\n",rf);

    return 0;
}

float resultado(int n)
{
    int i,den;
    float r=0;
    for(i=0,den=0;i<n;i++)
    {
        den=((i+1)*(i+3));
        r+=(1.0/den);
    }
    return r;
}
