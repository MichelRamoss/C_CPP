#include <stdio.h>

int main()
{
	int i,n,s=1,fac=1;
	float x,aux,r,sen=0;
	//Ecuacion 18 sen (x)
	printf("Funciones Trigonometricas: Calculo de sen (x)");
	//La precision varia mucho, dependiendo del valor de 'x' y del numero de iteraciones que el usuario ingrese
	printf("\n\nIngrese el valor de x: ");
	scanf("%f",&x);
	printf("\n\nIngrese la precision o numero de iteraciones: ");
	scanf("%d",&n);
	
	aux=x;
	for(i=1;i<n+1;i++)
	{
		fac*=i;
		if(i%2!=0)
		{
			sen+=(aux*s)/fac;
			aux*=(x*x);
			s*=-1;
		}
	}
	r=sen;
	printf("\n\nsen (%f) = %f",x,r);
	return 0;
}
