#include <stdio.h>

float result(float x,int n);

int main()
{
    int n;
    float cos,x;
    do{
        printf("Obtener el resultado de cos(x) mediante iteracciones\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    cos=result(x,n);
    printf("\nEl resultado de cos(%.3f) es: %.5f\n",x,cos);
    return 0;
}

float result(float x,int n)
{
    int i;
    float rcos,fact;
    for(i=0,fact=1,rcos=0.0;i<n;i++)
    {
        rcos+=fact;
        fact*=(-1.0)*((x/(4*i+3))*(x/(4*i+4)));
    }
    return rcos;
}
