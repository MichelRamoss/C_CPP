//Programacion en Ingeneria
//Practica 1
//Programa 11 - ln(x)

#include <stdio.h>

int main(int argc, char *argv[]){
    
    float x,y,lnx, num;
    int n, i, den;
    
    do{
        printf("ln(x) mediante iteracciones.\nIngresa el valor de x: ");
        scanf("%f",&x);
    }while(x<0);
    printf("Ingresa el valor de n: ");
    scanf("%d",&n);
    
    for(i=0,y=(x-1)/(x+1),num=y,den=1,lnx=0; i<n; i++){
        lnx+=(num/den);
        num*=(y*y);
        den+=2;
    }
    
    lnx*=2;
    
    printf("ln(%f): %f\n",x,lnx);
    
    return 0;
}
