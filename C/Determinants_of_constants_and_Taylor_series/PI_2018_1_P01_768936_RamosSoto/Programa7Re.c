#include <stdio.h>

float potencia(float x,int n);

int main()
{
    int i,j,n,de,sig;
    float re=0,rexf=0,x,numero;
    do{
    printf("\nObtener el resultado de e^x\n");
    printf("\nIngrese el numero de iteracciones: ");
    scanf("%d",&n);
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);
    }while(n<0);
    numero=potencia(x,n);
    for(i=0,sig=1;i<n;i++)
    {

        for(j=0,de=1;j<i;j++)
        {

            de*=(j+1);
        }
        re=((sig*numero)/de);
        printf("%+.3f",re);
        rexf+=re;
    }
    printf("\nEl resultado de e^%.2f es: %.3f\n",x,rexf);
    return 0;
}

float potencia(float x,int n)
{
    int i;
    float numero;
    for(i=0,numero=1.0;i<n;i++)
    {
        numero=x;
    }
    return numero;
}
