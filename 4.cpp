#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    // int n, ans=0;
    //     cin>>n;
    //     for(int i=1; i<11; i++){
    //         if(n%i== 0) {
    //         	ans=i;
    //         }
    //     }
    //  cout<<ans<<endl;

    // int R,O,C;
    // cin>>R>>O>>C;
    // int rem = 20-O;
    // if(((rem*6*6)+C) >R) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;

    // int t;
    // cin>>t;
    // while(t--){
    // 	int m, n;
    // 	cin>>m>>n;
    // 	cout<<(m-1)*(n-1)<<endl;
    // }

    // unordered_map<int, bool> year;
    // year[2010] = true;
    // year[2015] = true;
    // year[2016] = true;
    // year[2017] = true;
    // year[2019] = true;
    // int t;
    // cin>>t;
    // while(t--){
    // 	 int n;
    // 	cin>>n;
    // 	if(year.find(n) == year.end()) cout<<"NOT HOSTED"<<endl;
    // 	else cout<<"HOSTED"<<endl;
    // }

    // int t;
    // cin>>t;
    // while(t--){
    // 	int a,b;
    // 	cin>>a>>b;
    // 	if(a>b) cout<<">"<<endl;
    // 	else if(a<b) cout<<"<"<<endl;
    // 	else cout<<"="<<endl;
    // }

    // int t;
    // cin>>t;
    // while(t--){
    // 	string a,b;
    // 	cin>>a>>b;
    // 	set<char> chars;
    // 	for(int i=0 ; i<a.size(); i++){
    // 		chars.insert(a[i]);
    // 	}
    // 	int ans =0;
    // 	for(int i=0; i<b.size(); i++){
    // 		int c = chars.count(b[i]);
    // 		if(c>0) ans++;
    // 	}
    // 	cout<<ans<<endl;

    // }

    //    int p,r,n;
    //    cin>>p>>r>>n;
    //    int si = p*r*n/100;
    //    cout<<si<<endl;
    // return 0;
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    // 	for(int j=1; j<=i; j++){
    // 		if((i%2==0) && (j!=1 && j!=i)){
    // 			cout<<"0 ";
    // 		}
    // 		else cout<<"1 ";

    // 	}
    // 	cout<<endl;
    // }

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     long long n;
    //     cin >> n;
    //     long long rem, c = 0, ans = 0;
    //     while (n > 0)
    //     {
    //         rem = n % 10;
    //         ans += rem * pow(2, c);
    //         c++;
    //         n = n / 10;
    //     }
    //     cout << ans << endl;
    //     t--;
    // }
    // int a = 2;
    // int b = 3;
    // cout << (a ^ b);
    // int t;
    // cin>>t;
    // while(t--){
    //     int x, a, b;
    //     cin>>x>>a>>b;
    //     cout<<(a + (100 - x)*b ) *10;
    // }
    int n,m;
    cin>>n>>m;
    int count =0;
    for(int i=1; i<=n; i++){
    	for(int j =1; j<=n; j++){
    		if(i<j && ((m%i)%j == (m%j)%i)){
    		cout<<i<<" and "<<j<<": "<<(m%i)%j<<" and " <<(m%j)%i<<endl;
    			count++;
    		}
    	}
    }
    cout<<count<<endl;
    return 0;
}