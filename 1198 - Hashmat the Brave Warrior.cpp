#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int hasmat,oppo,diff;
    while(scanf("%lld %lld",&hasmat,&oppo)!=EOF)
    {
        if(hasmat>oppo)
        {
            diff=hasmat-oppo;
            printf("%lld\n",diff);
        }
        else
        {
            diff=oppo-hasmat;
            printf("%lld\n",diff);
        }
    }
    return 0;
}
