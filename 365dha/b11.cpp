#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ;
    long long int tong =1, gt=0;
    cout<<" nhap goa tri n"<<endl;
    cin>>n;
    for( int i=1;i<=n;i++)
    {
        tong*= i ;
        gt+=tong;
    }
    cout<<" gia tri tong la"<< gt<<endl;
    return 0;
}