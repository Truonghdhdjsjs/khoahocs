#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n , tong=1;
    cout<<" nhap gia tri n "<<endl;
    cin>>n;
    for( int  i=1.0 ; i<=n; i++)
    {
        tong *=i;
    }
    cout<<tong;
    return 0;
}