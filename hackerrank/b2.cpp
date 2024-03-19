#include<iostream>
using namespace std;
int main()
{
    int a , b,c , tong;
    cout<<" hay nhap gia tri a"<<endl;
    cin>>a;
    cout<<" hay nhap gia tri b"<<endl;
    cin>>b;
    cout<<" hay nhap gia tri c"<<endl;
    cin>>c;
    if(1<= a,b,c<=1000)
    {
        tong=a+b+c;
        cout<<" gia tri cua a ,b ,c"<<" "<<tong;
    }
    else
    {
        cout<<" sai dieu kien ! Moi nhap lai";
    }
    return 0;
}