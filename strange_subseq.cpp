#include <bits/stdc++.h>
#define int long long
using namespace std;

int mod(int x){
	if(x>0){
		return x;
	}
	return -x;
}

void solve(){
	int n;
	cin>>n;
	int a[n];
	int c = 0; //count of -ve (inc. 0)
	int min_pos = INT_MAX;  
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i] <= 0){
			c++;
		}
		else{
			min_pos = min(min_pos, a[i]);
		}
	}
	sort(a, a+n);
	int min_abs_diff = INT_MAX;
	for(int i=1; i<n; i++){
		if(a[i] <= 0){
			min_abs_diff = min(min_abs_diff, mod(a[i]-a[i-1]));
		}
	}
	// all negative
	if(min_pos == INT_MAX){
		cout<<n<<endl;
	}
	// all positive
	if(c == 0){
		cout<<1<<endl;
	}
	// can we keep 1 positive no?
	if(min_abs_diff >= min_pos){
		cout<<c+1<<endl;
	}
	else{
		cout<<c<<endl;
	}

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	while(t--){
		solve();
	}

	return 0;
}


/*
6
4
-1 -2 0 0
7
-3 4 -2 0 -4 6 1
5
0 5 -3 2 -5
3
2 3 1
4
-3 0 2 0
6
-3 -2 -1 1 1 1
*/