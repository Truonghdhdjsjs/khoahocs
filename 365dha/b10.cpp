#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x ,n ;
    long long int t=1;
    cout<<" nhap n"<<endl;
    cin>>n;
    cout<<" nhap x"<<endl;
    cin>>x;
    for( int i=1 ; i<=n;i++)
    {
        t*=x;
    }
    cout<< t;
    return 0;
}