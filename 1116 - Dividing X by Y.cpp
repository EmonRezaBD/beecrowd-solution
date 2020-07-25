#include<iostream>
using namespace std;
int main()
{
    int N;
    int X,Y;
    cin>>N;
    while(N--)
    {
        cin>>X>>Y;
        if (Y==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else
        {
            printf("%.1f\n",(float)X/Y);
        }
    }
        return 0;
    
}
