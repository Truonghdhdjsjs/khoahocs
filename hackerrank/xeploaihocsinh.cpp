#include<iostream>
#include<cmath>
// #include<iomanip>
using namespace std;
int main()
{
    double van,toan,ly,hoa,anh,dtb=0.0;
    cin>>van;
    cin>>toan;
    cin>>ly;
    cin>>hoa;
    cin>>anh;
    dtb=(van*2+toan*3+ly+hoa+anh*2)/9;
   double result=roundf(dtb*1100)/100;
    if(dtb<5)
    {
        cout<<result;
        cout<<"YEU";
    }
    else if(dtb>=5 && dtb<6.5)
    {
         cout<<result;
        cout<<"TB";
    }
    else if( dtb>=6.5 && dtb<8)
    {
        cout<<result;
        cout<<"KHA";
    }
    else if( dtb>=8)
    {
         cout<<result;
        cout<<"GIOI";
    }
    return 0;
}