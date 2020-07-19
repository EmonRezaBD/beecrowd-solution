#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N;
    float first,sec,trd,avg=0;
    cin>>N;
    while(N--)
    {
        cin>>first>>sec>>trd;
        avg=(first*2+sec*3+trd*5)/10.0;
        //cout<<avg<<endl;
        printf("%.1f\n",avg);

    }
    //cout<<"oK"<<endl;
    return 0;

}
