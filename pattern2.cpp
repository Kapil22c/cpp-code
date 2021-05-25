#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        if(i==1)
        {
            for(int i=1;i<=n;i++)
            cout<<"*\t";
        }
        else
        {
            for(int j=1;j<=n/2;j++)
            {
                cout<<"*\t";
            }
            cout<<" \t";
            for(int j=1;j<=n/2;j++)
            {
                cout<<"*\t";
            }
        }
        cout<<endl;
    }
    cout<<"*\t";
    for(int space=1;space<=(n/2)+1;space++)
    {
        cout<<" \t";
    }
    cout<<"*\t";
    cout<<endl;

    for(int i=n-1;i<=n;i++)
    {
        if(i==n)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<"*\t";
            }
         }
         else
         {
            for(int j=1;j<=n/2;j++)
            {
                cout<<"*\t";
            }
            cout<<" \t";
            for(int j=1;j<=n/2;j++)
            {
                cout<<"*\t";
            }
         }
         cout<<endl;
    }
    return 0;
}


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int s1=1,s2=n-2;
//     for(int i=1;i<=n;i++){
//         if(i ==1 || i==n)
//             for(int j=1;j<=n;j++)
//                 cout<<"*\t";
//         else{
//             if(i<=n/2){
//                 for(int j=n/2;j>=i-1;j--){
//                     cout<<"*\t";
//                 }
//                 for(int j=1;j<=s1;j++)
//                     cout<<" \t";
//                 s1+=2;
//                 for(int j=n/2;j>=i-1;j--){
//                     cout<<"*\t";
//                 }
//             }
//             else{
//                 for(int j=n/2;j<i;j++)
//                     cout<<"*\t";
//                 for(int j=1;j<=s2;j++)
//                     cout<<" \t";
//                 s2-=2;
//                 for(int j=n/2;j<i;j++)
//                     cout<<"*\t";
//             }
//         }
//         cout<<endl;
//     }
    

//     return 0;
// }