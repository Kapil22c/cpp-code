#include<bits/stdc++.h>
using namespace std;
void addDigits(int num){
	        int ans = 0;
        
        while(num>0){
            int rem = num%10;
            ans += rem;
            num = num/10;
        }
        if(ans<10){
        	cout<<ans<<endl;
        }
        if(ans>=10){
        	addDigits(ans);
        }

       
}
int main() {
	int n;
	cin>>n;
	addDigits(n);
	// int a[n];
	// int max = INT_MIN;
	// for(int i=0; i<n; i++){
	// 	cin>>a[i];
	// 	if(a[i]>max){
	// 		max = a[i];
	// 	}
	// }
	// cout<<max;

	return 0;
}