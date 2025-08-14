#include<stdio.h>

int main()
{
    int n,i,sig;
    float x,k,pot,rln=0.0;
    do
    {
        printf("Obtener el resultado del logaritmo natural de (1+x)/(1+x) \nSiempre y cuando x sea menor a 1 \n");
        printf("\nIngrese el valor de x: ");
        scanf("%f", &x); fflush(stdin);
        printf("Numero de iteraciones: ");
        scanf("%d", &n); fflush(stdin);
    }while(n<0||x>1);
    for(i=1,pot=1.0; i<n; i++)
    {
        sig=(1-((2)*(i%2)));
        pot*=x;
        k+=(sig*1.0/i+1.0);
        rln+=k*pot;
    }
    printf("\nEl resultado de (ln(%.2f))/%.2f es: %.4f\n", 1+x,1+x,rln);
    return 0;
}
