#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    //int arr[N+1];
    for(int i=1;i<=N;i++)
    {
        ///arr[i]=i;
        if(i%2==0)
        {
            cout<<i<<"^"<<"2"<<" = "<<i*i<<endl;
        }
        
    }
        return 0;
    
}
