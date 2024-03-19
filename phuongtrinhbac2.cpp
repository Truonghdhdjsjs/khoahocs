#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a , b,c , delta;
    cout<<" hay nhap gia trị a"<<endl;
    cin>>a;
    cout<<" hay nhap gia tri b"<<endl;
    cin>>b;
    cout<<" hay nhap gia trị c"<<endl;
    cin>>c;
    delta=pow(b,2) * 4*a*c;
    if( delta<0)
    {
        cout<<" phuong trinh vo nghiệm ";
    }
    else if( delta==0)
    {
        /* code */
        cout<<" phuong trinh co nghiem kep"<< endl;

    }
    else if( delta>0)
    {
        /* code */
        cout<<" phuong trinh co 2 nhgiep phân biệt"<<endl;
    }
    return 0;
    
}