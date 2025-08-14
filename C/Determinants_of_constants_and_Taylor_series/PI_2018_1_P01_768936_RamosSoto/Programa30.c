#include <stdio.h>

int main()
{
	int i,n;
	float x,aux=1,th=0;
	//Ecuacion 30 tanh^-1 (x)
	printf("Funciones Trigonometricas: Calculo de tanh^-1 (x)");
	do{
		printf("\n\nIngrese el valor de x (valores entre 0 y 1): ");
		scanf("%f",&x);
		printf("\n\nIndique la presicion o numero de iteraciones: ");
		scanf("%d",&n);
	}while (x>1 || x<0 || n<0);

	for(i=1;i<n+1;i++)
	{
		aux*=x; //Potencia de x
		if(i%2!=0)
		{
			th+=aux/i;
		}
	}
	printf("\n\ntanh^-1 (%f) = %f \n\n",x,th);
	return 0;
}
