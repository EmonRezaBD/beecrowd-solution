#include<stdio.h>
int main()
{
    int N,a,b,c,d;
    scanf("%d",&N);
    a=N/3600;
    b=N-(a*3600);
    c=b/60;
    d=b-(c*60);
    printf("%d:%d:%d\n",a,c,d);
    return 0;
    //Here is the end of this program.
}
