#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,d,x;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    x=((pow((x2-x1),2))+(pow((y2-y1),2)));
    d=sqrt(x);
    printf("%.4lf\n",d);
    return 0;
    //Here is the end of this program.
}
