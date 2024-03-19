//tinh tong cac so uoc chung
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ,tong =0;
    cout<<" nhap gia tri n"<<endl;
    cin>>n;
    for( int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            tong+=i;
            cout<<tong<<endl;
        }
    }
    system("pause");
    return 0;
}