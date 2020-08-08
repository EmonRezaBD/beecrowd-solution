#include<stdio.h>
int main()
{
    char a[20];
    double b,c,s,k;
    scanf("%s",&a);
    scanf("%lf %lf",&b,&c);
    s=(c*(15/100.0));
    k=s+b;
    printf("TOTAL = R$ %.2lf\n",k);
    return 0;
    //Here is the end of this program.
}
