// Tìm ƯỚC LẺ LỚN NHẤT của số nguyên dương N
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int n , soonnhat=-1;
    cout<<"nhap gia tri n"<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        if(i%2!=0)
        {
            if (n%i==0)
            {
                /* code */
               soonnhat=i;
                
            }
            
        }
    }
    if(soonnhat!=-1)
    {
        cout<<" so lon nhat la"<<soonnhat;
    }
    return 0;
    
}