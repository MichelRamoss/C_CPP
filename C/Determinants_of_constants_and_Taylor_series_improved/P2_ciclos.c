//Practica 2 - Programacion en Ingenieria.
//ciclos

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float ln(int n);
float PI(int n);
float PI2(int n);
float PI3(int n);
float medio(int n);
float trescuartos(int n);
float ex(int n,float x);
float xe(int n, float x);
float ln1(int n,float x);
float ln2(int n,float x);
float lnx(int n, float x);
float lnx1(int n,float x);
float ax(int n, float x);
float ax2(int n, float x);
float sin1(int n, float x);
float cos1(int n,float x);
float tan1(int n,float x);
float potencia(float, float);
float factorial(float);
float exponencial(float);
float sen(float);
float sec1(int n,float x);
float csc1(int n, float x);
float sen2(int n, float x);
float coss2(int n,float x);
float tan11(int n, float x);
float sinhx(int n, float x);
float coshx(int n,float x);
float tanh1(int n, float x);
float resultado(float x,int n);
float sinh1(int n, float x);
float pro32(int n, float x);

int main(int argc, const char * argv[]) {
    
    int n = 0,x = 0, opc;
    
    do{
        printf("Programacion en ingenieria\nPratica 2 - ciclos\nMenu\n\n1._ln(2)\n2._PI/4\n3._PI^2/6\n4._PI^2/8\n");
        printf("5._1/2\n6._3/4\n7._e^x\n8._x*e^x\n9._Ln(1 + x)\n10._1/2 ln de (1+x/1-x)\n");
        printf("11._ln(x) x>0\n12._ln(x) x>=.5\n13._(1+x)^a\n14._a^x\n15._Bk\n16._Ek\n17._E2K\n");
        printf("18._Sin(x)\n19._Cos(x)\n20._Tan(x)\n21._Sec(x)\n22._Csc(x)\n23._Sin^-1\n24._Cos^-1\n25._Tan^-1\n");
        printf("26._Sinh(x)\n27._Cosh(x)\n28._Tanh(x)\n29._Sinh(x)^-1\n30._Tanh(x)^-1\n31._ln(1+x)/1+x\n32._e^sin(x)");
        
        printf("\n\n\n\nOpcion escogida: ");
        scanf("%d",&opc);
    switch(opc)
    {
        case 1:
                ln(n);
                break;
        case 2:
                PI(n);
                break;
        case 3:
                PI2(n);
                break;
        case 4:
                PI3(n);
                break;
        case 5:
                medio(n);
                break;
        case 6:
                trescuartos(n);
                break;
        case 7:
                ex(n,x);
                break;
        
        case 8:
                xe(x,n);
                break;
        
        case 9:
                ln1(x,n);
                break;
            
        case 10:
                ln2(x,n);
                break;
            
        case 11:
                lnx(x,n);
                break;
        
        case 12:
                lnx1(x,n);
                break;
            
        case 13:
                ax(x,n);
                break;
            
        case 14:
                ax2(x,n);
                break;
            
        case 15:
            printf("Estamos trabajando en ello...");
            break;
            
        case 16:
            printf("Estamos trabajando en ello...");
            break;
            
        case 17:
            printf("Estamos trabajando en ello...");
            break;
            
        case 18:
            sin1(x,n);
            break;
            
        case 19:
            cos1(x,n);
            break;
            
        case 20:
            tan1(n,x);
            break;
        
        case 21:
            sec1(n,x);
            break;
            
        case 22:
            csc1(n,x);
            break;

        case 23:
            sen2(n,x);
            break;

        case 24:
            coss2(n,x);
            break;
            
        case 25:
            tan11(n,x);
            break;
            
        case 26:
            sinhx(n,x);
            break;
            
        case 27:
            coshx(n,x);
            break;
            
        case 28:
            tanh1(n,x);
            break;
            
        case 29:
            sinh1(n,x);
            break;
            
        case 30:
            pro32(n,x);
            break;
            
        case 31:
            printf("saliendo...\n");
            break;
        
        
        default:
            printf("Opcion incorrecta");
    }
    }while (opc!=31);
    
    return 0;
    }


float ln(int n)
{
    int i,x,sig,opc1;
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
        lnf +=ln;
    }
    printf("\nEl ln(2) es: %.3f\n",lnf);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
    scanf("%d",&opc1);
    }while(opc1!=1);
        return 0;
}

float PI(int n)
{
    int i,sig,den,opc1;
    float pi2=0,pi=0;
    do{
        printf("PI/4 mediante n iteracciones.\nIngrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0);
    for(i=0,den=0;i<n;i++)
    {
        sig=(1-(2*(i%2)));
        den=(2*(i)+1);
        pi2=((sig)*(1.0/den));
        pi+=pi2;
    }
    printf("\nPI/4 con %d iteracciones es: %f\n",n,pi);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float PI2 (int n)
{
    float pi2 = 0.0;
    int i,opc1;
    printf("Series de Constantes: Calculo de (PI^2)/6");
    printf("\n\nIngrese la presicion o el numero de iteraciones: ");
    scanf("%d",&n);
    
    for(i=1;i<n+1;i++)
    {
        pi2+=(1.0/((i)*(i)));
    }
    printf("\n\n(Pi^2)/6 = %f.\n\n",pi2);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float PI3(int n)
{
    int i,x,den,opc1;
    
    float r=0,rpf=0;
    do{
        printf("Obtener el resultado de PI^2/8 mediante iteracciones\n");
        printf("\nNumero de iteracciones: ");
        scanf("%d",&x);
    }while(x<0);
    for(i=0,den=0;i<x;i++)
    {
        den=((2*(i)+1)*(2*(i)+1));
        r=(1.0/den);
        printf("%+.6f",r);
        rpf+=r;
    }
    printf("\nEl resultado de Pi^2/8 es: %.3f\n",rpf);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float medio(int n)
{
    int i,den,opc1;
    float r=0,med=0;
    do{
        printf("1/2 mediante n iteracciones.\nIngrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0);
    for(i=0,den=0;i<n;i++)
    {
        den=((2*(i)+1)*(2*(i)+3));
        r=(1.0/den);
        med+=r;
    }
    printf("\n1/2 con %d iteracciones es: %f\n",n,med);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float trescuartos(int n)
{
    float ec = 0.0;
    int i,c=1,opc1;
    //Ecuacion 6 (3/4)
    printf("Series de Constantes: Calculo de 3/4");
    printf("\n\nIngrese la presicion o numero de iteraciones: ");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++,c+=1)
    {
        ec+=(1.0)/(c*(c+2));
    }
    printf("\n\n3/4 = %f.\n\n",ec);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float ex(int n,float x)
{
    int p,j, den,sig,opc1;
    float rex=0,rexf=0,numero;
    do{
        printf("\nObtener el resultado de e^x mediante iteracciones\n");
        printf("\nNumero de iteracciones: ");
        scanf("%d",&n);
        printf("Ingrese el valor de x: ");
        scanf("%f",&x);
    }while(n<0);
    for(p=0,sig=1;p<n;p++)
    {
        for(j=0,den=1,numero=1;j<p;j++)
        {
            numero*=x;
            den*=(j+1);
        }
        rex=(sig*numero
             /den);
        rexf+=rex;
    }
    printf("\nEl resultado de e^%.2f es: %.3f\n",x,rexf);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float xe(int n, float x){
    
    double fact, ex, res = 0.0;
    long int i;
    int opc1;
    printf("x*e^x mediante iteraciones\nIngrese el valor de x y n: \n");
    scanf("%f %d",&x,&n);
    
    for(i=0, ex=0,fact=1;i<n;i++)
    {
        ex+=fact;
        fact*=(x/(i+1));
        
        res=ex*x;
        
    }
    printf("exp^%f*%f = %lg\n",x,x,res);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float ln1(int n,float x)
{
    float ln = 0.0;
    int i, s=1,opc1;
    printf("Funciones Exponenciales y Logaritmicas: Calculo de logaritmo natural de 1 + x");
    do{
        printf("\n\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("\n\nIndique la presicion o numero de iteraciones: ");
        scanf("%d",&n);
    }while(x>1||x<-1||n<0);
    
    for(i=1;i<n+1;i++)
    {
        ln+=((x/i));
        x*=x;
    }
    printf("\n\nln = %f\n\n",ln);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float ln2(int n,float x)
{
    int i,j,den,opc1;
    float k,l,numero,pot,rln=0,rlnf=0;
    do{
        printf("nObtener el resultado de 1/2 del logaritmo natural de (1+x/1-x) mediante iteracciones... \nSiempre y cuando x sea mayor a -1 y menor a 1\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Numero de iteracciones: ");
        scanf("%d",&n);
    }while(x>1||x<-1||n<0);
    for(i=0;i<n;i++)
    {
        for(j=0,numero=1,pot=0;j<(i+1);j++)
        {
            pot=(2*(j)+1);
            numero=pow(x,pot);
        }
        den=(2*(i)+1);
        rln=(numero/den);
        printf("%+f",rln);
        rlnf+=rln;
    }
    k=1+x;
    l=1-x;
    printf("\nEl resultado de 1/2 del ln de (%.2f/%.2f) es: %.3f\n",k,l,rlnf);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

               
float lnx(int n, float x)
{
                   
float y,lnx, num;
int i, den,opc1;
                   
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
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
return 0;
}

float lnx1(int n,float x)
{
    float ln,aux=1,aux2=0;
    int i,opc1;
    do{
        printf("Funciones Exponenciales y Logaritmicas: Calculo de logaritmo natural de x");
        printf("\n\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("\n\nIndique la presicion o numero de iteraciones: ");
        scanf("%d",&n);
    }while (x<0.5 || n<0);
    
    ln=x-1;
    for(i=1;i<n+1;i++)
    {
        aux*=(ln/x);
        aux2+=aux*1/i;
    }
    printf("\n\nln(%f) = %f\n\n",x,aux2);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float ax(int n, float x)
    {
        int i,j,den,denln,opc1;
        float a,k,h,pot,num=1.0,numln,rln=0.0,rlnf=0.0,ra=0.0,raf=0.0,rafi=0.0;
        do{
            printf("a^x mediante iteracciones\n");
            printf("\nIngrese el valor a: ");
            scanf("%f",&a);
            printf("Ingrese el valor x: ");
            scanf("%f",&x);
            printf("Ingrese el numero de iteracciones: ");
            scanf("%d",&n);
        }while(n<0);
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
            rafi=1+raf;
        }
        printf("\nEl resultado de %.2f^%.2f es: %.4f\n",a,x,rafi);
        do{
            printf("\n\nTecle 1 para regresar al menu: ");
            scanf("%d",&opc1);
        }while(opc1!=1);
        return 0;
    }

float ax2(int n, float x)
{
    int i,j,den,denln,opc1;
    float a,k,h,pot,num=1.0,numln,rln=0.0,rlnf=0.0,ra=0.0,raf=0.0,rafi=0.0;
    do{
        printf("a^x mediante iteracciones\n");
        printf("\nIngrese el valor a: ");
        scanf("%f",&a);
        printf("Ingrese el valor x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0);
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
        rafi=1+raf;
    }
    printf("\nEl resultado de %.2f^%.2f es: %.4f\n",a,x,rafi);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float sin1(int n,float x)
{
    int i,s=1,fac=1,opc1;
    float aux,r,sen=0;
    //Ecuacion 18 sen (x)
    printf("Funciones Trigonometricas: Calculo de sen (x)");
    //La precision varia mucho, dependiendo del valor de 'x' y del numero de iteraciones que el usuario ingrese
    printf("\n\nIngrese el valor de x: ");
    scanf("%f",&x);
    printf("\n\nIngrese la precision o numero de iteraciones: ");
    scanf("%d",&n);
    
    aux=x;
    for(i=1;i<n+1;i++)
    {
        fac*=i;
        if(i%2!=0)
        {
            sen+=(aux*s)/fac;
            aux*=(x*x);
            s*=-1;
        }
    }
    r=sen;
    printf("\n\nsen (%f) = %f",x,r);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float cos1(int n,float x)
{
    int i,opc1;
    float cos,fact;
    do{
        printf("Obtener el resultado de cos(x)\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    for(i=0,fact=1,cos=0.0;i<n;i++)
    {
        cos+=fact;
        fact*=(-1.0)*((x/(4*i+3))*(x/(4*i+4)));
    }
    printf("\nEl resultado de cos(%.3f) es: %.5f\n",x,cos);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float tan1(int n,float x)
{
    int i,opc1;
    float sx, nu,tan,cx;
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
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
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


float exponencial(float x) {
    float suma = 0, ax, error = 0.0001;
    int k = 0;
    
    do {
        ax = (potencia(x, k) / factorial(k));
        suma += ax;
        k++;
        if (ax < 0) {
            ax = -ax;
        }
    }    while (ax > error);
    return (suma);
}


float sen(float x) {
    float suma = 0, ax, error = 0.001;
    int k = 0;
    
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


float sec1(int n, float x){
        float  csc;
        int opc1;
        printf("Programa que calcula funciones trigonometricas\n");
        printf("Cosecante\n");
        printf("Damen un numero\n");
        scanf("%f", &x);
        csc = 1/sen(x);
        printf("La cosecante de %.2f es %.2f", x,csc);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
        return 0;
    }

float csc1(int n, float x){
    float  csc;
    int opc1;
    printf("Programa que calcula funciones trigonometricas\n");
    printf("Cosecante\n");
    printf("Damen un numero\n");
    scanf("%f", &x);
    csc = 1/sen(x);
    printf("La cosecante de %.2f es %.2f", x,csc);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float  sen2(int n, float x)
{
    int i,j,den = 0,denk = 0,opc1;
    float pot,num = 0.0,numk = 0.0,pf,k=1.0,rsen=0.0,rsenf=0.0;
    do{
        printf("Sen^-1(x) mediante iteracciones... \nSiempre y cuando x sea menor a l \n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(x>1||n<0);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            numk=((2*(j)+1));
            denk=((2*(j)+2));
            pot=((2*(j)+1));
            num=pow(x,pot);
            den=((2*(j)+1));
        }
        k*=(numk/denk);
        pf=(num/den);
        rsen=(k*pf);
        rsenf+=rsen;
    }
    printf("El resultado de sen^-1(%.3f) es: %.6f ",x,rsenf);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float coss2(int n,float x)
{
    int i,opc1;
    float aux,cos=0,r,u=1,v=1,w=2,p;
    //Ecuacion 24 cos^-1 (x)
    printf("Funciones Trigonometricas: Calculo de cos^-1 (x)");
    printf("\n\nIngrese el valor de x (|x| < 1): ");
    scanf("%f",&x);
    printf("\nIngrese la precision o numero de iteraciones: ");
    scanf("%d",&n);
    
    aux=x;
    for(i=1;i<n+1;i++)
    {
        if(i%2!=0)
        {
            cos+=(aux/i)*u;
            aux*=(aux*aux);
            u*=(v/w);
            v+=2;
            w+=2;
        }
    }
    p=3.1416/2;
    r=p-cos;
    printf("\n\ncos^-1 (%f) = %f",x,r);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float tan11(int n, float x)
{
    int i,j,den,sig,opc1;
    float numero,pot,rtan=0.0,rtanf=0.0;
    do{
        printf("Tan^-1 de (x) mediante iteracciones... \nSiempre y cuando x sea menor a 1\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Numero de iteracciones: ");
        scanf("%d",&n);
    }while(x>1||n<0);
    for(i=0;i<n;i++)
    {
        sig=(1-((2)*(i%2)));
        for(j=0,numero=1,pot=0;j<(i+1);j++)
        {
            pot=(2*(j)+1);
            numero=pow(x,pot);
        }
        den=(2*(i)+1);
        rtan=(sig*numero/den);
        printf("%+f",rtan);
        rtanf+=rtan;
    }
    printf("\nEl resultado de tan^-1 de (%.2f) es: %.3f\n",x,rtanf);
    
    int k,l,m,sign;
    float y,deno,pote,rtang=0.0,rtangf=0.0,rtangfi=0.0;
    do{
        printf("Resultado de la tan^-1 de (x) mediante iteracciones... \nSiempre y cuando x sea mayor o igual a 1\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&y);
        printf("Numero de iteracciones: ");
        scanf("%d",&m);
    }while(y<1||m<0);
    for(k=0;k<m;k++)
    {
        sign=(((2)*(k%2))-1);
        for(l=0,pote=0;l<(k+1);l++)
        {
            pote=(2*(l)+1);
            deno=(2*(l)+1)*(pow(y,pote));
        }
        rtang=(sign*1.0/deno);
        printf("%+f",rtang);
        rtangf+=rtang;
        rtangfi=(rtang+1.570796327);
    }
    printf("\nEl resultado de tan^-1 de (%.2f) es: %.3f\n",y,rtangfi);
    
    int r,s,o,signo;
    float z,denom,poten,rtange=0.0,rtangef=0.0,rtangefi=0.0;
    do{
        printf("Resultado de la tan^-1 de (x) mediante iteracciones... \nSiempre y cuando x sea menor o igual a 1\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&z);
        printf("Numero de iteracciones: ");
        scanf("%d",&o);
    }while(z>1||o<0);
    for(r=0;r<o;r++)
    {
        signo=(((2)*(r%2))-1);
        for(s=0,poten=0;s<(r+1);s++)
        {
            poten=(2*(s)+1);
            denom=(2*(s)+1)*(pow(z,poten));
        }
        rtange=(signo*1.0/denom);
        printf("%+f",rtange);
        rtangef+=rtange;
        rtangefi=(rtange-1.570796327);
    }
    printf("\nEl resultado de tan^-1 de (%.2f) es: %.3f\n",z,rtangefi);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float sinhx(int n, float x)
{
    int i,opc1;
    float rsen,fact;
    do{
        printf("Sinh(x) mediante iteracciones.\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    for(i=0,fact=x,rsen=0.0;i<n;i++)
    {
        rsen+=fact;
        fact*=((x/(2*i+2))*(x/(2*i+3)));
    }
    printf("\nEl resultado de senh(%.3f) es: %.5f\n",x,rsen);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float coshx(int n,float x)
{
    int i=1,opc1;
    float cos=1,aux2=1,aux=1;
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
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float tanh1(int n, float x)
{
    int i,opc1;
    float rsen,rcos,fact,tanh;
    do{
        printf("Obtener el resultado de senh(x) mediante iteracciones\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    for(i=0,fact=x,rsen=0.0;i<n;i++)
    {
        rsen+=fact;
        fact*=((x/(2*i+2))*(x/(2*i+3)));
    }
    printf("\nEl resultado de senh(%.3f) es: %.5f\n",x,rsen);
    
    
    do{
        printf("Obtener el resultado de cosh(x) mediante iteracciones\n");
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(n<0||x<0);
    for(i=0,fact=1,rcos=0.0;i<n;i++)
    {
        rcos+=fact;
        fact*=((x/(4*i+3))*(x/(4*i+4)));
    }
    printf("\nEl resultado de cosh(%.3f) es: %.5f\n",x,rcos);
    return 0;
    
    do{
        printf("Obtener el valor de tanh(x)");
        printf("\nIngrese el valor de x:");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones:");
        scanf("%d",&n);
        
        
    }while(n<0 || x<0);
    for(i=0,fact=0 ,tanh=0.0;i<n;i++)
    {
        tanh=rsen/rcos;
    }
    printf("\nEl resultado de tanh(%.3f) es: %.5f\n",x,tanh);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}


float sinh1(int n, float x)
{
    int opc1;
    float rsenf;
    do{
        printf("\nIngrese el valor de x: ");
        scanf("%f",&x);
        printf("Ingrese el numero de iteracciones: ");
        scanf("%d",&n);
    }while(x>1||n<0);
    rsenf=resultado(x,n);
    printf("El resultado de senh^-1(%.3f) es: %.6f ",x,rsenf);
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}

float resultado(float x,int n)
{
    int i,j,den = 0,denk = 0,sig,opc1;
    float pot,num = 0.0,numk = 0.0,pf,k=1.0,rsen=0.0,rsenf=0.0;
    for(i=0;i<n;i++)
    {
        sig=(1-((2)*(i%2)));
        for(j=0;j<i+1;j++)
        {
            numk=((2*(j)+1));
            denk=((2*(j)+2));
            pot=((2*(j)+1));
            num=pow(x,pot);
            den=((2*(j)+1));
        }
        k*=(numk/denk);
        pf=(num/den);
        rsen+=((sig)*(k*pf));
    }
    return rsen;
}

float pro32(int n, float x)
{
    int i,sig,opc1;
    float k,pot,rln=0.0;
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
    do{
        printf("\n\nTecle 1 para regresar al menu: ");
        scanf("%d",&opc1);
    }while(opc1!=1);
    return 0;
}
