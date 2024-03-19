#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double tong=0.0;
    cout<<" nhpa gia tri n "<<endl ;
    cin>>n;
    for( int i=1; i<=n;i++)
    {
         tong+= 1.0/(i*(i+1));
         cout<<" gia tri cua tong la "<<"\n"<< tong;
    }
    system("pause");
    return 0;
}