#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<2)
    {
        cout<<" khong la so ngto";

    }
    else
    {
        /* code */
        int i=2;
        while (i*i<=n && n%i!=0)
        {
            /* code */
            i++;
        }
        if(i*i>n)
        {
             cout<<" là  só ngto";
        }
        else
        {
            cout<<" ko la so ngto";
        }
        return 0;
    }
    
    
}