#include<iostream>
using namespace std;
int main()
{
    int N;
    //cin>>N;
    //int arr[N+1];
    /*int X;
    while(N--)
    {
        cin>>X;
        if(X>0&&X%2==0)
        {
            cout<<"EVEN POSITIVE"<<endl;
        }
        else if(X<0&&X%2==0)
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }
        if(X>0&&X%2!=0)
        {
            cout<<"ODD POSITIVE"<<endl;
        }
        else if(X<0&&X%2!=0)
        {
            cout<<"ODD NEGATIVE"<<endl;
        }
        
        else if(X==0)
        {
            cout<<"NULL"<<endl;
        }
    }*/
    int count=0;
    for(int i=1;i<=5;i++)
    {
        cin>>N;
        if(N%2==0)
        {
            count++;
        }
    }
    cout<<count<<" valores pares"<<endl;
        return 0;
    
}
