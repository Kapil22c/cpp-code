#include<bits/stdc++.h>
using namespace std;
// bool isPrime(int n){
// 	for(int i=2; i<=sqrt(n); i++){
// 		if(n%i == 0) return false;
// 	}
// 	return true;
// }

// void fib(int n){
// 	int a=0, b=1;
// 	int c;
// 	for(int i=1; i<=n; i++){
// 		cout<<a<<endl;
// 		c=a+b;
// 		b=a;
// 		a=c;
// 	}
// }
int main(){
	// string str;
	// getline(cin, str);
	// string str_rev;
	// for(int i = str.size()-1; i>=0; i--){
	// 	str_rev.push_back(str[i]);
	// }
	// cout<<str_rev<<endl;

	// int a,b;
	// cin>>a>>b;
	// for(int i=a; i<=b;i++){
	// 	if(isPrime(i)) cout<<i<<endl;
	// }

	// int n;
	// cin>>n;
	// fib(n);
	// int t;
 //    cin>>t;
 //    while(t--){
 //        int x, a, b;
 //        cin>>x>>a>>b;
 //        cout<<(a + (100 - x)*b ) *10 << endl;
 //    }
	ios_base::sync_with_stdio(false);

    cin.tie(NULL);

	// int t;
	// cin>>t;
	// while(t--){
		// int n,x,k;
		
		// cin>>n>>x>>k;
	
		// if(x==0 || x%k ==0) {
		// 	cout<<"YES"<<endl;
			
		// }
		// else if((((n+1)-x) % k) == 0){
		// 	cout<<"YES"<<endl;

		// }
		
		// else{
		// 	cout<<"NO"<<endl;
		// }
		// long long count = 0;
		// long long n;
		// cin>>n;
		// for(long long i=0; i<2*n-1; i++){
		// 	long long x = i ^ (i+1);
		// 	long long y = (i+2) ^ (i+3);
 	// 		if(x == y){
		// 		count++;
		// 	}
		// }
		// cout<<count%(10^9+7)<<endl;

	// 	int t;
	// 	cin>>t;
	// 	while(t--){
	// 		int n;
	// 		cin>>n;
	// 		int ans =0;
	// 		int i =0;
	// 		while(n>0){
	// 			int rem = n%10;
	// 			ans += rem*pow(2,i);
	// 			i++;
	// 			n = n/10;

	// 		}
	// 		cout<<ans<<endl;
	// 	}
	// }

	// 	long long n;
	// 	cin>>n;
	// 	n = abs(n);
	// 	long long odd =0, even =0;
	// 	while(n>0){
	// 		int rem = n%10;
	// 		if(rem%2 == 0){
	// 			even += rem;
	// 		}
	// 		else{
	// 			odd += rem;
	// 		}
	// 		n = n/10;
	// 	}
	// 	if(even%4==0 || odd%3==0){
	// 		cout<<"YES"<<endl;
	// 	}else{
	// 		cout<<"NO"<<endl;
	// 	}
	// }
    int a,b,c;
    char ch;
    
    cin>>ch;
    while(ch!='x' && ch!='X')
    {
        if(ch=='+')
        {
            cin>>a>>b;
            c=a+b;
            cout<<c<<endl;
        }
        else if(ch=='-')
        {
            cin>>a>>b;
            c=a-b;
            cout<<c<<endl;
        }
        else if(ch=='*')
        {
            cin>>a>>b;
            c=a*b;
            cout<<c<<endl;
        }
        else if(ch=='%')
        {
            cin>>a>>b;
            c=a%b;
            cout<<c<<endl;
        }
        else if(ch=='/')
        {
            cin>>a>>b;
            c=a/b;
            cout<<c<<endl;
        }
        else
             cout<<"Invalid operation. Try again."<<endl;
        cin>>ch;   
	}
}