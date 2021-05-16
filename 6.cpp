#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define M 1000000007
#define messi ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int power(ll x, ll y, ll p)
{
    int res = 1;
    x = x % p; 
    if (x == 0) return 0; 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int trainlingzeroes(int n){
    int ans =0;
    for(int d =5; n/d>1; d = d*5){
        ans += n/d;
    }
    return ans;
}

int fibonacci(int n){
    int a =0, b=1, ans =0;
    for(int i= 2; i<n; i++){
        ans = a+b;
        a=b;
        b=ans;
    }
    return ans;
}

bool isPrime(int n){
    for(int i=2; i<=n-1; i++){
        if(n%i==0) return false;
    }
    return true;
}

void printPrime(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)) cout<<i<<" ";
    }
}

int fact(int n){
    int ans =1;
    for(int i=1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}

int NCR(int n, int r){
    return fact(n)/(fact(n-r) * fact(r));
}

int main() 
{
	messi
	// int t;
	// cin>>t;
	// while(t--){
	// 	ll n;
	// 	cin>>n;
	// 	cout<<power(2, n-1, M)<<endl;
	// }

    int n;
    cin>>n;
    // cout<<trainlingzeroes(n);
    // cout<<fibonacci(n);
    // printPrime(n);
    // cout<<fact(5);
    cout<<NCR(5,2);

	return 0;
}

