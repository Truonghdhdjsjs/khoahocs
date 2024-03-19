#include<iostream>
using namespace std;
int main()
{
    int n , k,m=0;
    cin>>n;
    k=n;
    while (k!=0)
    {
        /* code */
        m=m*10+k%10;
        k=k/10;
    }
    if(n=m)
    {
        cout<<" là so đối xứng";
    }
    else
    {
        cout<<" không la so đoi xứng";
    }
    return 0;
}