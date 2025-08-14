#include <stdio.h>

int main()
{
	float ln,aux=1,aux2=0,x;
	int i,n;
	//Ecuacion 12 Ln (x)
	do{
		printf("Funciones Exponenciales y Logaritmicas: Calculo de logaritmo natural de x");
		printf("\n\nIngrese el valor de x: ");
		scanf("%f",&x);
		printf("\n\nIndique la presicion o numero de iteraciones: ");
		scanf("%d",&n);
	}while (x<0.5 || n<0);
	
	ln=x-1;
	for(i=1;i<n+1;i++)
	{
		aux*=(ln/x);
		aux2+=aux*1/i;
	}
	printf("\n\nln(%f) = %f\n\n",x,aux2);
	return 0;
}
