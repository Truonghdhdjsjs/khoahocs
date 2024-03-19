#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<" nhap uoc so"<<endl;
    cin>>n;
    for (int  i = 1; i <=n; i++)
    {
        /* code */
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}