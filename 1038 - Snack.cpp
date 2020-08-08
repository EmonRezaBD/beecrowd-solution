#include<stdio.h>
int main()
{
    int X,Y;
    float t;
    scanf("%d %d",&X,&Y);
    if(X==1)
    {
        t=4.00*Y;
    }
    else if(X==2)
    {
        t=4.50*Y;
    }
    else if(X==3)
    {
        t=5.00*Y;
    }
    else if(X==4)
    {
        t=2.00*Y;
    }
    else
    {
        t=1.50*Y;
    }
    printf("Total: R$ %.2f\n",t);
    return 0;
}

