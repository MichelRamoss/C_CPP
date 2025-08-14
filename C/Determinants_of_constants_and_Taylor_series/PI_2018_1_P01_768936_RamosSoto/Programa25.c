#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,den,n,sig;
    float x,numero,pot,rtan=0.0,rtanf=0.0;
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
    return 0;
}
