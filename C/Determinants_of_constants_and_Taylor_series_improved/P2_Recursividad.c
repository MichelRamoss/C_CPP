//Practica 2 - Programacion en Ingenieria.
//recursividad

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ln (int n);
float PI (int n);
float PI2 (int n);
float PI3 (int n);
float medio (int n);
float cuartos (int n);
double ex (float x);
double xe (float x);
float ln2 (float x);
float ln3 (float x);
float ln4 (float x);
float ln5 (float x);
float ax (float a, float x, int n);
double seno (float x);
double coseno (float x);
float hcos (float x);
float tanin (float x);
float ln6 (float x);

int main(int argc, const char * argv[]) {
    
    int n,opc;
    float x,a;
    printf("PROGRAMACION EN INGENIERIA - PRACTICA 2\n");
    do{
        printf("\n--------------------------------------------------------\n");
		printf("\nMenu:\n1. ln(2)\n2. PI/4\n3. PI^2/6\n4. PI^2/8\n5. 1/2\n6. 3/4\n7. e^x\n8. xe^x\n9. ln (1+x)\n");
		printf("10. 1/2 ln (1-x/1+x)\n11. ln (x)\n12. ln (x)\n13. a^x\n14. Sen (x)\n15. Cos (x)\n");
		printf("\n---> Otro numero ---> SALIR <---\n");
        printf("\nElija una opcion: ");
        scanf("%d",&opc);
        
    	switch(opc)
   		{
        	case 1:	
	  			do{
	    			printf("\nLogartimo natural de (2) mediante recursividad\nIngrese el numero de iteracciones: ");
	   				scanf("%d",&n);
	    		}while(n<0);
	    		printf("\n--------------------------------------------------------\n");
	    		printf("\nEl ln(2) = %f\n",ln(n));
	            break;
	        case 2:	
	        	do{
	        		printf("\nPI/4 mediante recursividad\nIngrese el numero de iteracciones: ");
	       			scanf("%d",&n);
	   			}while(n<0);
	   			printf("\n--------------------------------------------------------\n");
	   			printf("\nPI/4 = %f\n",PI(n));
				break;
	        case 3:
	        	do{
	    			printf("\nPI^2/6 mediante recursividad\nIngresar el numero de iteracciones: ");
	    			scanf("%d",&n);
	    		}while(n<0);
	    		printf("\n--------------------------------------------------------\n");
	    		printf("\nPi^2/6 = %f\n",PI2(n));
	        	break;
	        case 4:
	        	do{
				    printf("\nPI^2/8 mediante recursividad\nIngresar numero de iteracciones: ");
				    scanf("%d",&n);
			    }while(n<0);
				printf("\n--------------------------------------------------------\n");
			    printf("\nPi^2/8 = %f\n",PI3(n));
	        	break;
	        case 5:
	        	do{
			        printf("\n1/2 mediante recursividad\nIngrese el numero de iteracciones: ");
			        scanf("%d",&n);
			    }while(n<0);
			    printf("\n--------------------------------------------------------\n");
			    printf("\n1/2 = %f\n",medio(n));
	        	break;
	        case 6:
	        	do{
				    printf("\n3/4 mediante recursividad\nIngrese el numero de iteracciones: ");
				    scanf("%d",&n);
			    }while(n<0);
			    printf("\n--------------------------------------------------------\n");
			    printf("\nEl resultado de 3/4 es: %f\n",cuartos(n));
	        	break;
	        case 7:
				printf("\ne^x mediante recursividad\nPara 'x' en el rango de -7 a 10");
				printf("\nIngrese el valor de x: ");
				scanf("%f",&x);
				printf("\n--------------------------------------------------------\n");
				printf("\ne^%.2f = %lf\n",x,ex(x));
	        	break;
	        case 8:
	        	printf("\nxe^x mediante recursividad\nIngrese el valor de x: ");
				scanf("%f",&x);
				printf("\n--------------------------------------------------------\n");
				printf("\n(%.2f)e^%.2f = %lf\n",x,x,xe(x));
	        	break;
	        case 9:
	        	do{
				    printf("\nlogaritmo natural de (1+x) mediante recurrencia\n CONDICION (-1 < x <= 1)");
				    printf("\nIngrese el valor de x: ");
				    scanf("%f",&x);
			    }while(x>1||x<=-1||n<0);
			    printf("\n--------------------------------------------------------\n");
			    printf("\nln (1 + %.2f) = %f\n",x,ln2(x));
	        	break;
	        case 10:
	        	do{
				    printf("\n1/2 de logaritmo natural de (1+x/1-x) mediante recurrencia");
				    printf("\nCONDICION (-1 < x < 1)\nIngrese el valor de x: ");
				    scanf("%f",&x);
			    }while(x>=1||x<=-1||n<0);
			    printf("\n--------------------------------------------------------\n");
			    printf("\n1/2 ln (1+%.2f/1-%.2f) = %f\n",x,x,ln3(x));
	        	break;
	        case 11:
	        	do{
				    printf("\nlogaritmo natural de (x) mediante recurrencia");
				    printf("\nCONDICION (x > 0)\nIngrese el valor de x: ");
				    scanf("%f",&x);
			    }while(x<0||n<0);
			    printf("\n--------------------------------------------------------\n");
			    printf("\nln (%.2f) = %f\n",x,ln4(x));
	        	break;
	        case 12:
				do{
				    printf("\nlogaritmo natural de (x) mediante recurrencia");
				    printf("\nCONDICION (x >= 1/2)\nIngrese el valor de x: ");
				    scanf("%f",&x);
			    }while(x<0.5||n<0);
			    printf("\n--------------------------------------------------------\n");
			    printf("\nln (%.2f) = %f\n",x,ln5(x));
	        	break;
	        case 13:
	        	do{
				    printf("a^x mediante recursividad\nIngrese el valor a: ");
				    scanf("%f",&a);
				    printf("Ingrese el valor x: ");
				    scanf("%f",&x);
				    printf("Ingrese el numero de iteracciones: ");
				    scanf("%d",&n);
			    }while(n<0);
			    printf("\n%.2f^%.2f = %.4f\n",a,x,ax(a,x,n));
	        	break;
	        case 14:
				printf("\nseno de (x) mediante recursividad\nIngrese el valor de x: ");
				scanf("%f",&x);
				printf("\n--------------------------------------------------------\n");
				printf("\nsen (%.2f) = %lf\n",x,seno(x));
	        	break;
	        case 15:
	        	printf("\ncoseno de (x) mediante recursividad\nIngrese el valor de x: ");
				scanf("%f",&x);
				printf("\n--------------------------------------------------------\n");
				printf("\ncos (%.2f) = %lf\n",x,coseno(x));
	        	break;
	        case 16:
	        	do{
	        		printf("\ntangente inversa de (x) mediante recursividad\nIngrese el valor de x: ");
					scanf("%f",&x);
				}while (x>1);
				printf("\n--------------------------------------------------------\n");
				printf("\tan^-1 (%.2f) = %lf\n",x,tanin(x));
	        	break;
	        case 17:
	        	do{
	        		printf("\ncoseno hiperbolico de (x) mediante recursividad\nIngrese el valor de x: ");
					scanf("%f",&x);
				}while (x<0);
				printf("\n--------------------------------------------------------\n");
				printf("\ncosh (%.2f) = %lf\n",x,hcos(x));
	        	break;
	        case 18:
	        	do{
				    printf("\nlogaritmo natural de (1+x) sobre (1+x) mediante recurrencia");
				    printf("\nCONDICION (|x| < 1)\nIngrese el valor de x: ");
				    scanf("%f",&x);
			    }while(x>1);
			    printf("\n--------------------------------------------------------\n");
			    printf("\n(ln(1+%.2f))/(1+x) = %f\n",x,ln6(x));
	        	break;
	        default:
	        	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	            printf("Finalizando programa...\nPresione 'Enter' para cerrar...");
	            printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	    }
    }while (opc);
    
	return 0;
}

float ln(int n){
    float ln;
    int i,den,sig;
    for(i=0;i<n;i++){
       sig=(1-((2)*(i%2)));
       den=(i+1);
       ln+=(sig*1.0/den);
    }
    return ln;
}

float PI(int n){
    int i,sig,den;
    float PI=0;
    for(i=0,den=0;i<n;i++){
        sig=(1-(2*(i%2)));
        den=(2*(i)+1);
        PI+=((sig)*(1.0/den));
    }
    return PI;
}

float PI2(int n){
    int i,den;
    float PI2=0;
    for(i=0,den=0;i<n;i++){
        den=((i+1)*(i+1));
        PI2+=(1.0/den);
    }
    return PI2;
}

float PI3(int x){
    int i,den;
    float PI3=0;
    for(i=0,den=0;i<x;i++){
        den=((2*(i)+1)*(2*(i)+1));
        PI3+=(1.0/den);
    }
    return PI3;
}

float medio(int n){
    int i,den;
    float medio=0;
    for(i=0,den=0;i<n;i++){
        den=((2*(i)+1)*(2*(i)+3));
        medio+=(1.0/den);
    }
    return medio;
}

float cuartos(int n){
    int i,den;
    float cuartos=0;
    for(i=0,den=0;i<n;i++){
        den=((i+1)*(i+3));
        cuartos+=(1.0/den);
    }
    return cuartos;
}

double ex(float x){
	float ex=1,aux2=1,aux=1;
	int i=1,n=25;
	
    while(i<n){
		aux*=x;
		aux2*=i;
		ex+=aux/aux2;	
		i++;
	}
    return ex;
}

double xe(float x){
	float xe=0,aux2=1,aux=1;
	int i=1,n=25;
	
    while(i<n){
		aux*=x;
		aux2*=i;
		xe+=((i*aux)/aux2);	
		i++;
	}
    return xe;
}

float ln2(float x){
	float ln2=0;
	int i, n=30000, s=1;
	
    for(i=1;i<n+1;i++,s*=-1){
		ln2+=(x/i)*s;
		x*=x;
	}
    return ln2;
}

float ln3(float x){
	float ln3=0;
	int i,n=30000;
	
    for(i=1;i<n+1;i++){
		if(i%2!=0)
		ln3+=(x/i);
		x*=x;
	}
    return ln3;
}

float ln4(float x){
	float lna,lnb,aux=1,ln4=0;
	int i,n=20000;
	
	lna=((x-1)/(x+1));
	
	for(i=1;i<n+1;i++){
		aux*=lna;
		if(i%2!=0)
		ln4+=aux*(1/i);
	}
    return ln4*2;
}

float ln5(float x){
	float lna,lnb,aux=1,ln5=0;
	int i,n=20000;
	
	lna=((x-1)/x);
	
	for(i=1;i<n+1;i++){
		aux*=lna;
		ln5+=aux*(1/i);
	}
    return ln5;
}

float ax(float a,float x,int n){
    int i,j,den,denln;
    float k,h,pot,num=1.0,numln,rln=0.0,rlnf=0.0,ra=0.0,raf=0.0,ax=0.0;
    for(i=0;i<n;i++)
    {
        for(j=0,numln=1.0,pot=0.0,den=1,denln=1;j<i+1;j++)
        {
            pot=((2*(j))+1);
            h=(a-1.0)/(a+1.0);
            numln=pow(h,pot);
            den*=(j+1);
        }
        denln=(2*(i)+1);
        rln+=(numln/denln);
        rlnf=2.0*rln;
        k=x*rlnf;
        num*=k;
        ra=(num/den);
        raf+=ra;
        ax=1+raf;
    }
    return ax;
}

double seno(float x){
	float seno=0,aux2=1,aux=1;
	int i=1,n=10,s=1;
	
    for(i=1;i<n;i++,s*=-1){
		aux*=(x*x);
		aux2*=i;
		seno+=(aux/aux2)*s;
	}
    return seno;
}

double coseno(float x){
	float coseno=1,aux2=1,aux=1;
	int i=1,n=20,s=1;
	
    while(i<n){
		aux*=x;
		aux2*=i;
		if(i%2==0){
			coseno+=(aux/aux2)*s;
			s*=-1;	
		}
		i++;
	}
    return coseno;
}

float tanin(float x)
{
    int i,j,den,n=10000;
    float num,pot,tanin=0.0;
    for(i=0;i<n;i++)
    {
        for(j=0,num=1,pot=0;j<(i+1);j++)
        {
            pot=(2*(j)+1);
            num=pow(x,pot);
        }
        den=(2*(i)+1);
        tanin+=(num/den);
    }
    return tanin;
}

float hcos (float x){
    int i,n=10000;
    float hcos,fact;
    
    for(i=0,fact=1,hcos=0.0;i<n;i++){
        hcos+=fact;
        fact*=((x/(4*i+3))*(x/(4*i+4)));
    }
    return hcos;
}

float ln6(float x)
{
    int i,sig,n=10000;
    float k,pot,ln6=0.0;
    for(i=1,pot=1.0; i<n; i++)
    {
        sig=(1-((2)*(i%2)));
        pot*=x;
        k+=(sig*1.0/i+1.0);
        ln6+=k*pot;
    }
    return ln6;
}
