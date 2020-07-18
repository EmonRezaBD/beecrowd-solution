#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x=7,y=5;
    for(int i=1;i<=9;i=i+2)
    {
        
        for(int j=x;j>=y;j--)
        {
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
           
        }
        //cout<<"ok";
        x=x+2;
        y=y+2;  
    }
    return 0;

}
