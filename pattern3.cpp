// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int s = n;
// 	for(int i=1; i<=n; i++){
// 		for(int j=1; j<=s; j++){
// 			cout<<j;
// 		}
// 		for(int j=2; j<=i; j++){
// 			cout<<"*";
// 		}
// 		for(int j=3; j<=i; j++){
// 			cout<<"*";
// 		}
// 		cout<<endl;
// 		s--;
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
// 		int n;
// 		cin>>n;
// 		int a[500];
// 		int sum = 0;
// 		for(int i=0; i<n; i++){
// 			cin>>a[i];
// 			if(a[i] > 0) {
// 				sum += a[i];
// 			}
// 		}
		
// 		// for(int i=0; i<n; i++){
// 		// 	if(a[i] > 0) {
// 		// 		sum += a[i];
// 		// 	}
// 		// }
// 		 cout<<sum<<endl;
// }
// int main() {
// 	int t;
// 	while(t--){

// 		solve();
		
// 	}
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int cs = 0;
	int ms = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cs = cs + a[i];
		if (cs < 0)
		{
			cs = 0;
		}
		ms = max(cs, ms);
	}
	//kadane's algo for max. subarray sum
	cout << "Maximum sum: " << ms << endl;
	return 0;
}