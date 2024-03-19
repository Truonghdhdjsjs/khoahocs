#include<iostream>
using namespace std;
int main()
{
    int n ;
    int tong =0;
    cout<<" nhap gia tri n"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        tong+=i;
        cout<<"gia tri tong la"<<" \n "<<tong;
    }
    return 0;
    
}