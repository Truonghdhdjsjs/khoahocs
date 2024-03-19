//Tính tich các Ước số của số nguyên dương N 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ;
    long long int tich=1;
    cout<<" nhap gia tri n "<<endl;
    cin>>n;
    for (int  i = 1; i <=n ; i++)
    {
        /* code */
        if(n%i==0)
        {
            tich*=i;
        }
    }
            cout<<" tich"<<tich<<" ";
    return 0;
}