//tìm số đâỏ ngược
#include<iostream>
using namespace std ;
int main()
{
    int n,k=0;
    cin>>n;
    do
    {
        /* code */
        k=k*10+n%10;
        n=n/10;
    } while (n!=0);
    cout<<k;
    return 0;
}