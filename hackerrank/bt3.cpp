#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<" nhap gia tri n "<<endl;
    cin>>n;
    if(n>=100 && n<=999)
    {
        int so1= n/100;
        int so2 = (n%100)/10;
        int so3 = n%10;
        cout<<"jasjdgj   "<<so3<<so2<<so1<<endl;
    }
    else
    {
        cout<<" chua giải được"<<endl;
    }
    return 0;
}