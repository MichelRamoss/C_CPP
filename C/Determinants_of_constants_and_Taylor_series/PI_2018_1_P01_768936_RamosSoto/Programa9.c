#include <stdio.h>

int main()
{
	float x, ln;
	int i, n, s=1;
	//Ecuacion 9 Ln (1+x)
	printf("Funciones Exponenciales y Logaritmicas: Calculo de logaritmo natural de 1 + x");
	do{
	printf("\n\nIngrese el valor de x: ");
	scanf("%f",&x);
	printf("\n\nIndique la presicion o numero de iteraciones: ");
	scanf("%d",&n);
	}while(x>1||x<-1||n<0);
	
	for(i=1;i<n+1;i++)
	{
		ln+=((x/i));
		x*=x;
	}
	printf("\n\nln = %f\n\n",ln);
	return 0;
}
