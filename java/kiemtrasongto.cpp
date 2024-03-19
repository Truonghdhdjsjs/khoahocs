#include<iostream>
using namespace std;
bool kiem_tra_so_ngto(int n)
{
    if (n<2)
    {
       return false;
    }

        for (size_t i = 2; i*i < n; i++)
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
    if(kiem_tra_so_ngto(n))
    {
        cout<<" la so ngto";
    }
    else
    {
        cout<<" khong la so ngto";
    }
    return 0;
}