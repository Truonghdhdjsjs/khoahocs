#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,cv;
    double s=0.0;
    cin>>a;
    cin>>b;
    cin>>c;
    if( a>0 && b>0 && c>0)
    {
        if(a+b>c && a+c>b && b+c>a)
        {
            int cv=a+b+c;
            int p = (a+b+c)/2;
            double s = sqrt(p*(p-a)*(p-b)*(p-c));
            cout<<cv<<endl;
            cout<<s;
        }
        else
        {
            cout<<-1;
        }
        
    }
    else
    {
        cout<<" không phải là hình tam giác";
    }
    return 0;
}