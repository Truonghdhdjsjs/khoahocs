#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long n ;
    double tong=0.0;
    cout<<" nnhap gia tri n"<<endl;
    cin>> n ;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        tong+=i/(i+1.0);
        cout<<" gia tri"<<"\n"<<tong;
    }
    return 0;
    
}