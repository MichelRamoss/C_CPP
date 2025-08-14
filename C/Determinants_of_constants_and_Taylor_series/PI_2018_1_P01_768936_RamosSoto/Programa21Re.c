//Programacion en Ingeneria
//Practica 1
//Programa 20 - tan(x)

#include <stdio.h>

int main(void)
{
    int i, n;
    float sx, x, nu,tan,cx;
    do{
        printf("Ingrese el numero de iteraciones: ");
        scanf("%d", &n);
    } while (n<1);
    printf("Ingrese el valor de x: ");
    scanf("%f", &x);
    for (i=0, sx=0, nu=x; i<n; i++, nu*=(-1*x*x/((2*i)*(2*i+1))))
        sx += nu;
    for (i=0, cx=0, nu=1; i<n; i++, nu*=(-1*x*x/((2*i-1)*(2*i))))
        cx += nu;
    tan=sx/cx;
    printf("tan(%f) = %f\n", x, tan);
    return 0;
}
