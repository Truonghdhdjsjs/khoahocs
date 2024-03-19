//ĐẾM và IN các Ước số của số nguyên dương N | 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ,dem=0;
    cout<<" nhap so n"<<endl;
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        /* code */
        if(n%i==0)
        {
            cout<<i<<" ";
            dem++;
        }
    }
    cout<<"so"<<n<<"co "<<dem<<"uoc chung";
    return 0;
    
}