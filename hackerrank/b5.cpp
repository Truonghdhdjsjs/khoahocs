#include<iostream>
using namespace std;
int main()
{
    int tongsogiay;
    cin>> tongsogiay;
    int gio = tongsogiay%86400/3600;
    int phut = tongsogiay%864000%3600/60;
    int giay = tongsogiay%86400%3600%60;
    cout<<gio <<"\n"<<phut<<"\n"<<giay;
    return 0;
}