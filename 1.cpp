#include <bits/stdc++.h>
using namespace std;

bool isInFib(int n)
{
    int a = 0;
    int b = 1;

    if (n == a || n == b)
        return true;
    int c = a + b;
    while (c <= n)
    {
        if (n == c)
            return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

int main()
{
    // long long a,b,c;
    // cin>>a>>b;
    // c = a+b;
    // cout<<c<<endl;
    // char d = 'Y';
    // cout<<(int) d;
    // int a = 1000000;
    // int b = 1000000;
    // long long c = a*1LL*b;
    // cout<<c<<endl;

    // long long l,b;
    // cin>>l>>b;
    // cout<<l*b<<endl;;

    // int a =3;
    // int b = 5;
    // cout << (a!=b)<<endl;

    // int n;
    // cin>>n;
    // int res=0;
    // while(n>0){
    // 	int rem = n%10;
    // 	res = res + rem;
    // 	n = n/10;
    // }
    // cout<<res<<endl;
    // return 0;

    // ladder design problem
    // int t, n;
    // cin>>t;
    // while(t--){
    //     cin>>n;
    //     for(int i=1; i<=(n*3)+2; i++){
    //         for(int j=1; j<=5; j++){
    //             if(i%3==0 || j==1 || j==5) cout<<"*";
    //             else cout<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // int day, count =0;
    // cin>>day;
    // while(day--){
    //     int r, h;
    //     cin>>r>>h;
    //     if((h*100) > (2* M_PI * r)){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;

    // int n;
    // cin>>n;
    // int i=2;
    // int flag =0;
    // while(i<n){
    // 	if(n%i == 0){
    // 		cout<<"Not Prime"<<endl;
    // 		flag =1;
    // 		break;
    // 		i++;
    // 	}
    // }
    // if(flag == 0) cout<<"Prime"<<endl;

    int n;
    cin >> n;
    cout << isInFib(n) << endl;

    return 0;
}