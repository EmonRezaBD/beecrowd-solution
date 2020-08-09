#include<stdio.h>
int main()
{
    float A,B,C,p,tr;
    scanf("%f %f %f",&A,&B,&C);
    if(A+B>C&&A+B!=C&&A+C>B&&A+C!=B&&B+C>A&&B+C!=A)
    {
        p=A+B+C;
        printf("Perimetro = %.1f\n",p);
    }
    else
    {
        tr=(0.5*(A+B)*C);
        printf("Area = %.1f\n",tr);
    }

    return 0;
    //Here is the end of this program.
}
