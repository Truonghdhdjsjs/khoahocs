// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int n , dem =0 ,i=1;
// //     cout<<" nhap gia tri n "<<endl;
// //     cin>>n;
// //     while (i<=n)
// //     {
// //         dem+=i;
// //         i++;
// //     }
// //     cout<<dem;
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     long long int tong=0;
//     int res=0;
//     cout<<" hay nhap gia tri n"<<endl;
//     cin>>n;
//     // for( int i=1 ; i<=n;i++)
//     // {
//     //     if( n%i==0)
//     //     {
//     //         cout<<i;
//     //     }
//     // }
//     while (n!=0)
//     {
//         /* code */
//         if( res<n%10)
//         {
//             res=n%10;
//         }
//         n=n/10;
//     }
//     cout<<res;
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n , k=0, res=0;
//     long long int tong=0;
//     cout<<" nhap gia tri n "<<endl;
//     cin>>n;
//     for ( int i=1 ; i<=n; i++)
//     {
//         if( n%i==0)
//         {
//             k+=i;
//             if (k<n)
//             {
//                 cout<<k;
//                 if( res<k%10)
//                 {
//                     res=k%10;
//                 }
//                 k=k/10;
//             }
            
//         }
//     }
//     int i=1;
//     while ( i<k)
//     {
//         /* code */
//         tong+=k;
//         i++;
//     }
//     cout<<" gia tri cua k la"<<k;
//     return 0;
// }

