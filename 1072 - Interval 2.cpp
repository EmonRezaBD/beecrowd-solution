#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int X;
   // int ar[15];
    int count=0,out=0;
   /* for(int i=10;i<=20;i++)
    {
        ar[i]=i;
        //cout<<ar[i]<<" ";
    }*/
    while(N--)
    {
        cin>>X;
        if(X>=10 && X<=20)
            count++;
        else
            out++;
            
    }
    
    cout<<count<<" in"<<endl;
    cout<<out<<" out"<<endl;
    return 0;
    
}
