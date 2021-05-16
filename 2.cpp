#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define M 1000000007
#define messi ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define t int t; cin>>t;

using namespace std;

int main() 
{
	
	
	// ll patlu, motu, n, sum = 0;
	// cin>>n;
	// for(ll i=1; i<=n; i++){
	// 	patlu =i;
	// 	sum = sum + patlu;
	// 	if(sum>=n) {
	// 		cout<<"Patlu";
	// 		break;
	// 	}
	// 	motu = 2*i;
	// 	sum = sum + motu;
	// 	if(sum>=n) {
	// 		cout<<"Motu";
	// 		break;
	// 	}
	// }

	// int t,n;
	// cin>>t;

	// while(t--){
	// 	cin>>n;
	// 	for(int i=1; i<=n; i++){
	// 		for(int j=1; j<=2*n; j++){
	// 			if(j>=i+1&& j<=((2*n)-i)) cout<<"#";
	// 			else cout<<"*";
	// 		}
	// 		cout<<endl;
	// 	}
	// }

	// int n;
	// cin>>n;
	// int b, count =0;
	// for(int i=2; i<=n/2; i+=2){
	// 	b= n-i;
	// 	if(b%2 == 0 && b!=i) count++;
	// }
	// cout<<count<<endl;

	// int m, n, k;
	// cin >> m >> n >> k;
	// if (k == 0)
	// 	cout << m * n << endl;
	// else if ((m - k) == n || (m - k) == m)
	// 	cout << 1 << endl;
	// else
	// 	cout << m - k << endl;

	// for(int i=20; i<80; i++){
	// 	cout<<i<<" XOR "<<i+1<<" && "<<i+2 <<" XOR "<<i+3<<" : "
	// 	<<(i^(i+1))<<" and "<<((i+2)^(i+3))<<endl;
	// }

	// long long M = 10^9+7;
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n, count =0;
	// 	cin>>n;
	// 	// for(int i=0; i<2*n-1; i++){
	// 	// 	int x = (i^(i+1));
	// 	// 	int y = ((i+2)^(i+3));
	// 	// 	if(x==y){
	// 	// 		count++;
	// 	// 	}
	// 	// }
	// 	cout<<n%M<<endl;
	// }

	// messi
	// int l;
	// cin>>l;
	// while(l--){
	// 	int n;
	// 	cin>>n;
	// 	cout<<(((2*n)-1)/2)%M<<endl;
	// }
	// ll t;
	// cin>>t;
	// while(t--){
	// 	ll n, m;
	// 	cin>>n>>m;
	// 	ll count = 0;
	// 	for(ll i=1; i<=n; i++){
	// 		ll a = i;
	// 		ll b = a+1;
	// 		int x = ((m%a)%b)%1000000007;
	// 		int y = ((m%b)%a)%1000000007;
	// 		if((a<b) && x==y){
	// 			count++;
	// 			b++;
	// 		}
	// 		a++;
	// 	}
	// 	cout<<count+1<<endl;

	// }


	int t;
	cin>>t;
	int c1, c2, c3, c4, n,m;
	int rick[1005], cab[1005];
	while(t--){
		cin>>c1>>c2>>c3>>c4;
		cin>>n>>m;
		for(int i=0; i<n; i++){
			cin>>rick[i];
		}
		for(int i=0; i<m; i++){
			cin>>cab[i];
		}
		int rickcost =0;
		for(int i=0; i<n; i++){
			rickcost += min(c1*rick[i], c2);
		}
		rickcost = min(rickcost, c3);
		int cabcost =0;
		for(int i=0; i<m; i++){
			cabcost+= min(c1*cab[i], c2);
		}
		cabcost = min(cabcost, c3);
		int finalAns = min(c4, rickcost+cabcost);
		cout<<finalAns<<endl;
	}
	return 0;
}
