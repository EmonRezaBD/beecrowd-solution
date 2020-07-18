#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N,M;
    while(cin>>M>>N,M!=0,N!=0)
    {
        //cout<<"ok";
        if(M<0 || N<0 )
          break;
        int sum=0;
        if(M<N)
        {
            for(int i=M;i<=N;i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"Sum="<<sum<<endl;
        }
        else
        {
            for(int i=N;i<=M;i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
               cout<<"Sum="<<sum<<endl;
        }

    }
    
    return 0;

}
