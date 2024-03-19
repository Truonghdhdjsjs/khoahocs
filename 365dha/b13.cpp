#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x;
    long long int gt=1 , s=0;
    cout<<" nhap gia tri n";
    cin>>n;
    cout<<" nhap gia tri x";
    cin>>x;
    if(n>0)
    {
        for( int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                 s+=pow(x,(2*i));
            }
        }
            cout<<" gia tri cua s la"<<s;
    }
    else
    {
        cout<<" kiem tra laij thua so";
    }
    return 0;
}