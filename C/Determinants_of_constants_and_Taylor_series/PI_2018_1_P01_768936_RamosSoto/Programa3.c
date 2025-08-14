#include <stdio.h>

int main()
{
	float pi2;
	int i,n;
	//Ecuacion 3 (Pi^2)/6
	printf("Series de Constantes: Calculo de (PI^2)/6");
	printf("\n\nIngrese la presicion o el numero de iteraciones: ");
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++)
	{
		pi2+=(1.0/((i)*(i)));	
	}
	printf("\n\n(Pi^2)/6 = %f.\n\n",pi2);
	return 0;
}
