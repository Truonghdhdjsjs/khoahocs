#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x;
    long long int s=0;
    cout<<" nhap gia tri n"<<endl;
    cin>>n;
    cout<<"nhap gia tri x"<<endl;
    cin>>x;
    if(n>0)
    {
        for ( int i = 1; i <=n; i++)
        {
            /* code */
            s+=pow(x,i);
        }
        cout<<" gia tri cua s"<<s;
        
    }
    else
    {
        cout<<"n so khoong am";
    }
    return 0;
}