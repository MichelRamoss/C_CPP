//Programacion en Ingeneria
//Practica 1
//Programa 8 - x*e^x

#include <stdio.h>

int main(int argc,char *argv[]){
    
    double fact, x, ex, res;
    long int i,n;
    
    printf("x*e^x mediante iteraciones\nIngrese el valor de x y n: \n");
    scanf("%lg %ld",&x,&n);
    
    for(i=0, ex=0,fact=1;i<n;i++)
    {
        ex+=fact;
        fact*=(x/(i+1));
        
        res=ex*x;
        
    }
    printf("exp^%lg*%lg = %lg\n",x,x,res);
    return 0;
}

