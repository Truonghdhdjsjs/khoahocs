#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<" số bạn muốn nhập là "<<endl;
    cin>>number;
    for( int i=1; i<= number; i++)
    {
        for ( int j=1; j<=i-1; j++)
        {
            cout<<"*"<<j;
        }
        cout<<"*"<<i;
    }
    return 0;
}