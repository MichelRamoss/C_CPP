#include <stdio.h>
int main()
{
    int i,x,sig;
    float ln=0,lnf=0;
    do{
    printf("Obtener el resultado del logartimo natural de ln (2)\n");
    printf("\nIngrese el numero de iteracciones: ");
    scanf("%d",&x);
    }while(x<0);
    for(i=0;i<x;i++)
    {
        sig = (1-((2)*(i%2)));
        ln =((sig)*(1.0/(i+1)));
        printf("%+.3f ",ln);
        lnf +=ln;
    }
    printf("\nEl ln(2) es: %.3f\n",lnf);

    return 0;
}
