#include<iostream>
using namespace std;
bool ktra_snt(int n)
{
    if(n<2)
    {
        return false;
    }
    for (int i = 2; i *i<=n; i++)
    {
        /* code */
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
    
}
int main()
{
    int n;
    cin>>n;
    if(ktra_snt(n))
    {
        cout<<" la so ngto";
    }
    else
    {
        cout<<" khong la so nto";
    }
    return 0;
}