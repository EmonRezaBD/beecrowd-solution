#include<stdio.h>
int main()
{
    int N,a,b,c,d;
    scanf("%d",&N);
    a=N/365;
    b=N-(a*365);
    c=b/30;
    d=b-(c*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,c,d);
    return 0;
    //Here is the end of this program.
}
