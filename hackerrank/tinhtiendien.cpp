#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long int n=0 ,x;
    cin>>x;
    if(x<=100)
    {
        n=x*1500;
    }
    else
    {
        n=100*1500+(x-100)*2000;
    }
    cout<<n;
    return  0;
}