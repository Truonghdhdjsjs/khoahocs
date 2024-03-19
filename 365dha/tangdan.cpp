#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n , k;
   int chusocuoi,chusokecuoi;
   bool kt=true;
   k=n;
   chusocuoi=k%10;
   k=k/10;
   while (k!=0)
   {
    /* code */
    chusokecuoi=k%10;
    if (chusocuoi<chusokecuoi)
    {
        /* code */
        kt=false;
        break;
    }
    else
    {
        chusocuoi=chusokecuoi;

    }
    
    
   }
   if(kt==true)
   {
    std::cout<<" dung";
   }
   else
   {
    std::cout<<"sai";
   }
   return 0;
}