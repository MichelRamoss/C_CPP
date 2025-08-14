#include<stdio.h>

int main()
{
    int i,x,den;
    
    float r=0,rpf=0;
    do{
    printf("Obtener el resultado de PI^2/8 mediante iteracciones\n");
    printf("\nNumero de iteracciones: ");
    scanf("%d",&x);
    }while(x<0);
    for(i=0,den=0;i<x;i++)
    {
        den=((2*(i)+1)*(2*(i)+1));
        r=(1.0/den);
        printf("%+.6f",r);
        rpf+=r;
    }
    printf("\nEl resultado de Pi^2/8 es: %.3f\n",rpf);
    return 0;
}






