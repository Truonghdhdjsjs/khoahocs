#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n , tong =0.0;
    cout<<" nhap gia tri n ";
    cin>> n;
    for( double i=1.0; i<=n;i++)
    {
        tong+= (2*i+1)/(2*i+2);
        cout<<" gia tri la "<<tong<<endl;
    }
    return 0;
}