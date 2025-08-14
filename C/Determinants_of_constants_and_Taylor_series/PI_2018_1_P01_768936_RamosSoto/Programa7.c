#include <stdio.h>

int main()
{
    int p,j,n,den,sig;
    float rex=0,rexf=0,x,numero;
    do{
    printf("\nObtener el resultado de e^x mediante iteracciones\n");
    printf("\nNumero de iteracciones: ");
    scanf("%d",&n);
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);
    }while(n<0);
    for(p=0,sig=1;p<n;p++)
    {
        for(j=0,den=1,numero=1;j<p;j++)
        {
            numero*=x;
            den*=(j+1);
        }
        rex=(sig*numero
		/den);
        printf("%+.3f",rex);
        rexf+=rex;
    }
    printf("\nEl resultado de e^%.2f es: %.3f\n",x,rexf);
    return 0;
}




