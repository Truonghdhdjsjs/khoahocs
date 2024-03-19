#include<iostream>
using namespace std;
int main()
{
    int h;
    cout<<" hay nhap gia tri h"<<endl;
    cin>>h;
    for( int i=0;i<h;i++)
    {
        for( int j=0; j<=i;j++)
        {
            cout<<"*"<<" ";
        }
    }
    return 0;
}