//Tính TÍCH các Ước số LẺ của số nguyên dương N 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,tich=1;
    cout<<" nhap gia tri n "<<endl;
    cin>>n;
    for( int i=1;i<=n;i++)
    {
        if(i%2!=0)//3 5 7 11
        {
            if(n%i==0)
            {
                tich*=i;
            }
        }
    }
                cout<<tich;
    return 0;
}