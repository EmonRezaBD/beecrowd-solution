#include<iostream>
using namespace std;
int main()
{
    int N;
    //int I=1,J=2,K=3;
   // cin>>N;
    while(cin>>N)
    {
        if(N==0)
            break;
        else
        {
            for(int i=1;i<=N;i++)
            {
                if(i<N)
                {
                    cout<<i<<" ";
                }
                if(i==N)
                  cout<<i;
            }
           cout<<endl;
           // getchar();
        }
    }
        return 0;
    
}
