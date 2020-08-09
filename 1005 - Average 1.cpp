#include<stdio.h>
int main()
{
    double A,B,av,x=3.5,y=7.5;
    scanf("%lf %lf",&A,&B);
    if(A<=10&&B<=10)
    {
        av=(((A*x)+(B*y))/(x+y));
    }
    printf("MEDIA = %.5lf\n",av);
    return 0;
    //Here is the end of this program.
}
