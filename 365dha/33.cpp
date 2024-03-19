#include<iostream>
using namespace std;
bool ktra_sochan ( int n)
{
    while (n!=0)
    {
        /* code */
        n=n%10;
        if(n%2!=0)
        {
            return false;
        }
        else
        {
            return true;
        }
        n=n/10;
    }
    
}
int main()
{
    long long int n ;
    cin>>n; 
    if(ktra_sochan(n))
    {
        cout<<" toan la so chan";
    }
    else
    {
        cout<<" toan la so le";
    }
    return 0;
}