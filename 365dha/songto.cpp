#include<iostream>
using namespace std;
bool kiem_tra_so_nguyen_to(int n)
{
    if(n<2)
    {
        return  false;
    }
    else
    {
        for (int i = 1; i < n-1; i++)
        {
            /* code */
            if(n%i==0)
            return false;
        }
    return true;
        
    }
}
int main()
{
    int n;
    cout<<" nhsp gia tri n"<<endl;
    cin>> n;

}