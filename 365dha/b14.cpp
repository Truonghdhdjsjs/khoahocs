#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ,x;
    long long int gt=1,s=0;
    cout<<" nhap gia tri n"<<endl;
    cin>>n;
    cout<<" nhap gia trij x"<<endl;
    cin>>x;
    if(n>0)
    {
        for (int i = 1; i <=n; i++)
        {
            /* code */
            gt=gt*x;
            if (i%2==1)
            {
                /* code */
                s=s+gt;
            }
            
        }
                cout<< s;
    }
    else
    {
        cout<<" nhap laij ik";
    }
    // system("pause");
    return 0;
}