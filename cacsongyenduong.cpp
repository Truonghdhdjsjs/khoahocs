#include<iostream>
#include<math.h>
using namespace std;
bool kiem_tra_so_nguyen_duong( int n)
{
    if(n<2)
    {
        return false;
    }
    else
    {
        for( int i =2 ; i<n; i++)
        {
            if( i%n==0)
            {
                return false;
            }
        }
    }
        return true;
}
void xuat_ra_so_nguyen_to(int n)
{
    while (n!=0)
    {
        /* code */
        if(kiem_tra_so_nguyen_duong(n%10)== true)
        {
            cout<<n%10<<" ";
        }
        n=n/10;
    }
    
}
int main()
{
   
    int n;
    do
    {
        /* code */
        cout<<"nhap so nguyên dương n:";
        cin>>n;
        if(n<=0)
        {
            cout<<" gia tri phải lớn hơn 0";
            system("pause");
        }
    } while (n<=0);
    
    xuat_ra_so_nguyen_to(n);
    system("pause");
    return 0;
}