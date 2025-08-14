#include <stdio.h>
#define PI 3.141592

int main()
{
	int i,n;
	float x,aux,cos=0,r,u=1,v=1,w=2,p;
	//Ecuacion 24 cos^-1 (x)
	printf("Funciones Trigonometricas: Calculo de cos^-1 (x)");
	printf("\n\nIngrese el valor de x (|x| < 1): ");
	scanf("%f",&x);
	printf("\nIngrese la precision o numero de iteraciones: ");
	scanf("%d",&n);
	
	aux=x;
	for(i=1;i<n+1;i++)
	{
		if(i%2!=0)
		{
			cos+=(aux/i)*u;
			aux*=(aux*aux);
			u*=(v/w);
			v+=2;
			w+=2;
		}
	}
	p=PI/2;
	r=p-cos;
	printf("\n\ncos^-1 (%f) = %f",x,r);
	return 0;
}
