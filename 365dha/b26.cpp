#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ,i=1, tong=0;
    cout<<" nhap gia tri n "<<endl;
    cin>> n;
    while (i<=n)
    {
        /* code */
        tong+=i;
        i++;
    }
    cout<<tong;
    return 0;
    
}