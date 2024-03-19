#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double tong=0.0;
    cout<<" nhap gia tri n "<<endl;
    cin>>n;
    for( int i=1;i<=n;i++)
    {
        tong+=1.0/(2*i);
        cout<<" gia tri tong la " << "\n"<< tong;
    }
    return 0;
}