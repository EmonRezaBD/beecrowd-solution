#include<iostream>
using namespace std;

int main()
{
    int X,Y,T,sum;
    cin>>T;
    while(T--)
    {
        sum=0;
        cin>>X>>Y;
        if(X<Y)
        {
            for(int i=X+1;i<Y;i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
            cout<<sum<<endl;
        }
        
        else if(X>Y)
        {
            for(int i=Y+1;i<X;i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
            cout<<sum<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
        //sum=0;
    }
    return 0;
}
