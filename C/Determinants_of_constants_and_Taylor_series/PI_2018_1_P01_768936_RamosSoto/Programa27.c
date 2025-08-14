#include <stdio.h>

int main()
{
	int i=1,n;
	float cos=1,aux2=1,aux=1,x;
	//Ecuacion 27 cosh (x)
	printf("Funciones Hiperbolicas: Calculo de cosh (x)");
	//ADVERTENCIA! Esta funcion tiende a infinito, entre mas grande sea el valor de x mayor sera el resultado
	//se recomienda utilizar 'x' con valores entre -15 y 15 con iteraciones menores a 50, dependiendo del valor de x
	printf("\n\nIngrese el valor de x: ");
	scanf("%f",&x);
	printf("\n\nIndique la presicion o numero de iteraciones: ");
	scanf("%d",&n);
	
	while(i<n+1){
		aux*=x;
		aux2*=i;
		if(i%2==0)
		cos+=aux/aux2;	
		i++;
	}
	printf("\n\ncosh (%f) = %f\n\n",x,cos);
	return 0;
}
