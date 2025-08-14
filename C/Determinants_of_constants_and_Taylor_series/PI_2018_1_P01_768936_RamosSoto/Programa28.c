#include <stdio.h>

float resultado(float x,int n);
float resultado2(float x,int n);

int main()
{
    int n,i;
    float rseno,rcose,x,tanh;
    do{
        printf("Obtener el resultado de senh(x) mediante iteracciones\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    rseno=resultado(x,n);
    printf("\nEl resultado de senh(%.3f) es: %.5f\n",x,rseno);



    do{
        printf("Obtener el resultado de cosh(x) mediante iteracciones\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    rcose=resultado2(x,n);
    printf("\nEl resultado de cosh(%.3f) es: %.5f\n",x,rcose);
   
   
   do{
		printf("Obtener el valor de tanh(x)");
		printf("\nIngrese el valor de x:");
		scanf("%f",&x);
		printf("Ingrese el numero de iteracciones:");
		scanf("d",&n);
		
		
	}while(n<0 || x<0);
	for(i=0, tanh=0.0; i<n;i++)
    {
        tanh=rseno/rcose;
    }
	 printf("\nEl resultado de tanh(%.3f) es: %.5f\n",x,tanh);
    return 0;
}
float resultado(float x,int n)
{
    int i;
    float rsen,fact;
    for(i=0,fact=x,rsen=0.0;i<n;i++)
    {
        rsen+=fact;
        fact*=((x/(2*i+2))*(x/(2*i+3)));
    }
    return rsen;
}


float resultado2(float x,int n)
{
    int i;
    float rcos,fact;
    for(i=0,fact=1,rcos=0.0;i<n;i++)
    {
        rcos+=fact;
        fact*=((x/(4*i+3))*(x/(4*i+4)));
    }
    return rcos;
}

	

