#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    // kierm tra số đối xứng
    int n ;
    cout<<" nhap so n "<<endl;
    cin>>n;
    int dem = 0;
    int temp = n;
    while (temp!=0)
    {
        /* code */
        temp=temp/10; //tach ra từng số
        dem++;
    }
    //áp dụng công thức để tìm số đảo ngược
    temp = n;
    dem--;
    int x=0;
    while (temp!=0)
    {
        x+=(temp%10)*pow(10,dem);
        dem--;
        temp=temp/10;
    }
    if(n==x)
    {
        cout<<" là so đối xứng ";
    }
    else
    {
        cout<<"khogn la so doi xung";
    }
    system("pause");
    return 0;
    
}