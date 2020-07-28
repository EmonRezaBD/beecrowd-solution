#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    //int arr[N+1];
    int X;
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
    }
        return 0;
    
}
