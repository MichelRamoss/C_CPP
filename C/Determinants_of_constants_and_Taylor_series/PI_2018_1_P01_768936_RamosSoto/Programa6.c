#include <stdio.h>

int main()
{
	float ec;
	int i,c=1,n;
	//Ecuacion 6 (3/4)
	printf("Series de Constantes: Calculo de 3/4");
	printf("\n\nIngrese la presicion o numero de iteraciones: ");
	scanf("%d",&n);

	for(i=0;i<=n;i++,c+=1)
	{
		ec+=(1.0)/(c*(c+2));	
	}
	printf("\n\n3/4 = %f.\n\n",ec);
	return 0;
}
