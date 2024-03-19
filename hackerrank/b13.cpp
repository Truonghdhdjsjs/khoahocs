#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    long long int tich=1;
    cin>>n;
    for( int i=1;i<=n;i++)
    {
        if(n %i==0)
        {

        tich*=i;
        }
    }
    cout<<tich;
    return 0;
}