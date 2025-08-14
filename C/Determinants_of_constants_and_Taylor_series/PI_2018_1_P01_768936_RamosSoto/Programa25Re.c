#include<stdio.h>
#include<math.h>

float resultado(float x,int n);
float resultado2(float y,int m);
float resultado3(float z,int o);

int main()
{
    int n;
    float x,rtanf;
    do{
    printf("Obtener el resultado de la tan^-1 de (x) mediante iteracciones... \nSiempre y cuando x sea menor a 1\n");
    printf("\nIngrese el valor de x: ");
    scanf("%f",&x);
    printf("Ingrese el numero de iteracciones: ");
    scanf("%d",&n);
    }while(x>1||n<0);
    rtanf=resultado(x,n);
    printf("\nEl resultado de tan^-1 de (%.2f) es: %.3f\n",x,rtanf);

    int m;
    float y,rtangfi;
    do{
    printf("\nObtener el resultado de la tan^-1 de (x) mediante iteracciones... \nSiempre y cuando x sea mayor o igual a 1\n");
    printf("\nIngrese el valor de x: ");
    scanf("%f",&y);
    printf("Ingrese el numero de iteracciones: ");
    scanf("%d",&m);
    }while(y<1||m<0);
    rtangfi=resultado2(y,m);
    printf("\nEl resultado de tan^-1 de (%.2f) es: %.3f\n",y,rtangfi);

    int o;
    float z,rtangefi;
    do{
    printf("Obtener el resultado de la tan^-1 de (x) mediante iteracciones... \nSiempre y cuando x sea menor o igual a 1\n");
    printf("\nIngrese el valor de x: ");
    scanf("%f",&z);
    printf("Ingrese el numero de iteracciones: ");
    scanf("%d",&o);
    }while(z>1||o<0);
    rtangefi=resultado3(z,o);
    printf("\nEl resultado de tan^-1 de (%.2f) es: %.3f\n",z,rtangefi);
    return 0;
}

float resultado(float x,int n)
{
    int i,j,den,sig;
    float num,pot,rtan=0.0;
    for(i=0;i<n;i++)
    {
        sig=(1-((2)*(i%2)));
        for(j=0,num=1,pot=0;j<(i+1);j++)
        {
            pot=(2*(j)+1);
            num=pow(x,pot);
        }
        den=(2*(i)+1);
        rtan+=(sig*num/den);
    }
    return rtan;
}

float resultado2(float y,int m)
{
    int k,l,sign;
    float deno,pote,rtang=0.0,rtangf=0.0;
    for(k=0;k<m;k++)
    {
        sign=(((2)*(k%2))-1);
        for(l=0,pote=0;l<(k+1);l++)
        {
            pote=(2*(l)+1);
            deno=(2*(l)+1)*(pow(y,pote));
        }
        rtang+=(sign*1.0/deno);
        rtangf=(rtang+1.570796327);
    }
    return rtangf;
}

float resultado3(float z,int o)
{
    int r,s,signo;
    float denom,poten,rtange=0.0,rtangef=0.0,rtangefi=0.0;
    for(r=0;r<o;r++)
    {
        signo=(((2)*(r%2))-1);
        for(s=0,poten=0;s<(r+1);s++)
        {
            poten=(2*(s)+1);
            denom=(2*(s)+1)*(pow(z,poten));
        }
        rtange+=(signo*1.0/denom);
        rtangef=(rtange-1.570796327);
    }
    return rtangef;
}
