//Programacion en Ingeneria
//Practica 1
//Programa 8 - x*e^x - recursivo

#include <stdio.h>

float resultado(long int n,double x);

int main(int argc,char *argv[]){
    
    double x;
    long int n;
    float res;
    
    printf("x*e^x mediante iteraciones\nIngrese el valor de x y n: \n");
    scanf("%lg %ld",&x,&n);
    
    res=resultado(n,x);
    
    printf("exp^%lg*%lg = %f\n",x,x,res);
    return 0;
}

float resultado(long int n,double x){
    double fact, ex, r = 0.0;
    long int i;
    for(i=0, ex=0,fact=1;i<n;i++){
        ex+=fact;
        fact*=(x/(i+1));
        
        r=ex*x;
    }
    return r;
}
