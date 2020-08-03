#include<stdio.h>
int main()
{
    int p,j,fact=1;
    scanf("%d",&p);
    for(j=1;j<=p;j++)
    {
        fact=fact*j;
    }
    printf("%d\n",fact);
    return 0;
}
