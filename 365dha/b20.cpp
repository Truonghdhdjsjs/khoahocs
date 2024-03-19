#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, tong=0;
    cout<<" nhap so n"<<endl;
    cin>>n;
    for( int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(n%i==0)
            {
                tong+=i;
            }
        }
    }
    cout<<tong;
    return 0;
}