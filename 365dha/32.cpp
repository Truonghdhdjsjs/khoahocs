#include<iostream>
using namespace std;
int main()
{
    long long int n,ln=0;
    cin>>n;

    do
    {
        /* code */
        int i= n %10;
        if(i>ln)
        {
            ln= i;
        }
        n= n /10;
    } while (n!=0);
    cout<<ln;
    return 0;
}