#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   long long int n , tam ,tong=0;
   int dem=0;
   cin>>n;
   tam=n;
   if(n==0)
        dem=1;
   while (tam!=0)
   {
    /* code */
        dem++;

        int chuso=tam%10;
        tong=tong+chuso;
        tam=tam/10;
   }
   cout<<dem<<endl;
   cout<<tong<<endl;
   return 0;
   
    
}