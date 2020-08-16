#include<stdio.h>
int main()
{
    double A,B,C,T,CI,TR,Q,R,pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    T=(1/2.0)*A*C;
    CI=pi*pow(C,2);
    TR=(1/2.0)*(A+B)*C;
    Q=pow(B,2);
    R=A*B;
    printf("TRIANGULO: %.3lf\n",T);
    printf("CIRCULO: %.3lf\n",CI);
    printf("TRAPEZIO: %.3lf\n",TR);
    printf("QUADRADO: %.3lf\n",Q);
    printf("RETANGULO: %.3lf\n",R);
    return 0;
    //Here is the end of this program.
}
