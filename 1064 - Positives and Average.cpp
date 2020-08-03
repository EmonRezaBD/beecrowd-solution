#include<stdio.h>
int main()
{
   float n,avg,sum=0;
   int i,count=0;
   for(i=1;i<=6;i++)
   {
       scanf("%f",&n);
       if(n>0)
       {
           sum=sum+n;
           count++;
       }
   }
   avg=sum/count;
   printf("%d valores positivos\n%.1f\n",count,avg);
   return 0;
}
