#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n , dem=0 ,i=1;
    long long int tong=0;
    cout<<" nhap gia trị n "<<endl;
    cin>>n;
    while (i<n)
    {
        /* code */
        tong+=i;
        i++;
        dem++;
    }
    cout<<dem;
    return 0;
}