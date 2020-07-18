#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    float A[100];
    for(int i=0;i<100;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<100;i++)
    {
        if(A[i]<=10)
        {
            cout<<"A"<<"["<<i<<"]"<<" = ";
            printf("%.1f\n",A[i]);

        }
            
    }

    //cout<<"Ok";
    return 0;

}
