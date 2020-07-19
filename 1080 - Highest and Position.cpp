#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    //int N;
    int pos=0;
    int temp;
    int arr[101];
    for(int i=0;i<100;i++)
    {
        cin>>arr[i];
    }
    temp=arr[1];
    for(int i=0;i<100;i++)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
            //pos++;
        }
    }
    //cout<<"KK:"<<temp<<endl;
    for(int i=0;i<100;i++)
    {
        if(temp!=arr[i])
           pos++;
        else
        {
            cout<<temp<<endl<<i+1<<endl;
        }
        
    }
   // cout<<"ans"<<endl;
    //cout<<temp<<endl<<pos<<endl;
    return 0;

}
