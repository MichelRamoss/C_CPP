#include <stdio.h>
#include <stdlib.h>
 
float potencia(float, float);
float factorial(float);
float sen(float);

 

int main(int argc, char** argv) {
 
    float x, seno,  csc;
    
    printf("Funcion trigonometrica\n");
    printf("Cosecante\n");
    printf("Damen un numero\n");
    scanf("%f", &x);
    csc = 1/sen(x);
    printf("La cosecante de %.2f es %.2f", x,csc);
    return 0;
}
 
 float factorial(float k) {
    float z = 1;
    int i;
 
    for (i = 1; i <= k; i++) {
        z *= i;
    }
    return (z);
}
 
 float potencia(float x, float k) {
    float z = 1;
    int i;
 
    if (k == 0) {
        return (1);
    } else {
        for (i = 0; i < k; i++) {
            z *= x;
        }
    }
return (z);
}
 
float sen(float x) {
    float suma = 0, ax, error = 0.001;
    int k;
 
    do {
        ax = (((potencia(-1, k) * potencia(x, 2 * k)) + 1) / factorial((2 * k) + 1));
        suma += ax;
        k++;
        if (ax < 0) {
            ax = -ax;
        }
    }    while (ax > error);
    return (suma);
}

 
