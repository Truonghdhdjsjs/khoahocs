#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n ,tong =0;
    cout<<" hay nhap gia tri n "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        tong+=pow(i,2);
        cout<<" gia tri cua tong la"<<"\n"<<tong;
    }
    return 0;
    
}