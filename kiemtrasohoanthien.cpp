#include<iostream>
#include<math.h>
using namespace std;
//tính phuong trình bat 2
int main()
{
    int n;
    cout<<" hay nhap gia trị n";
    cin>>n;
    do
    {
        /* code */
        if (n<=0)
        {
            /* code */
            cout<<" giá trị không hợp lệ"<<endl;
        }
        
    } while (n<=0);

    int s=0;
    for (int  i = 1; i <=n; i++)
    {
        /* code */
        s += pow(i,2);
        cout<<" giá trị của s là "<<s<<endl;
    }
    return 0;
}