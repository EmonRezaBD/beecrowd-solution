#include<iostream>
using namespace std;
int main()
{
    float sal,newsal=0;
    cin>>sal;
    if(sal>=0 && sal<=400)
    {
        newsal=(sal*15)/100;
    }
    else if (sal>=400.01&&sal<=800)
    {
        newsal=(sal*12)/100;
    }
    else if (sal>=800.01&&sal<=1200)
    {
        newsal=(sal*10)/100;
    }
    else if (sal>=1200.01&&sal<=2000)
    {
        newsal=(sal*7)/100;
    }
    else if (sal>=2000)
    {
        newsal=(sal*4)/100;
    }
    printf("Novo salario: %.2f\n",sal+newsal);
    printf("Reajuste ganho: %.2f\n",sal+newsal-sal);
    printf("Em percentual: %.0f ",((sal+newsal-sal)/sal)*100);
    cout<<"%"<<endl;
    return 0;
    
}
