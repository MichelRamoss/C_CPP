#include <stdio.h>

int main()
{
    int n,i;
    float cos,fact,x;
    do{
        printf("Obtener el resultado de cos(x)\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    for(i=0,fact=1,cos=0.0;i<n;i++)
    {
        cos+=fact;
        fact*=(-1.0)*((x/(4*i+3))*(x/(4*i+4)));
    }
    printf("\nEl resultado de cos(%.3f) es: %.5f\n",x,cos);
    return 0;
}



