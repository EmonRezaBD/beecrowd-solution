#include<stdio.h>
int main()
{
    float A,B,C,av,j;
    int k,x=2,y=3,z=5;
    scanf("%f %f %f",&A,&B,&C);
    j=A*2+B*3+C*5;
    k=x+y+z;
    if(A<=10 && B<=10 && C<=10)
    {
        av=j/k;
    }
    printf("MEDIA = %.1f\n",av);
    return 0;
    //Here is the end of this program.
}
