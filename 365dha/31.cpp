#include<iostream>
using namespace std;
int main()
{
    int n , tam;
    long long int tong=0 , tich =1;
    cin>>n;
    tam=n;
    while (tam!=0)
    {
        /* code */
        int chuso= tam%10;
        if( chuso %2==0)
        {
            tong= tong+chuso;
        }
        else
        {
            tich=tich*chuso;
        }
        tam=tam/10;
    }
    cout<<tong<<endl;
    cout<<tich;
    return 0;
    
}