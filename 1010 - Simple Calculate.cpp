#include<stdio.h>
int main()
{
    int a,b,u,v;
    float x,y,c,d,sum=0;
    scanf("%d %d %f",&a,&u,&x);
    scanf("%d %d %f",&b,&v,&y);
    c=u*x;
    d=v*y;
    sum=c+d;
    printf("VALOR A PAGAR: R$ %.2f\n",sum);
    return 0;
    //Here is the end of this program.
}
