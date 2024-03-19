#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double tong=0.0;
    cout<<" gia tri n"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
         tong+=1.0/(2*i+1);
         cout<<"gia tri tong la"<<"\n"<< tong;
    }
    return 0;
}