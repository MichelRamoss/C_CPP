#include <stdio.h>

float resultado(int n);

int main()
{
    int n;
    float lnf=0;
    do{
    printf("Obtener el resultado del logartimo natural de (2) mediante iteracciones:\n");
    printf("\nIngrese el numero de iteracciones: ");
    scanf("%d",&n);
    }while(n<0);
    lnf=resultado(n);
    printf("\nEl ln(2) es: %.3f\n",lnf);

    return 0;
}

float resultado(int n)
{
    float ln;
    int i,den,sig;
    for(i=0;i<n;i++)
    {
       sig=(1-((2)*(i%2)));
       den=(i+1);
       ln+=(sig*1.0/den);
    }
    return ln;
}
