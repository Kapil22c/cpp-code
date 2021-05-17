// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n+1];
// 	int maxSum =0;
// 	int curSum = 0;
// 	int left = -1;
// 	int right = -1;
// 	for(int i=0; i<n; i++){
// 		cin>>a[i];
// 	}
// 	//Generate all subarray
// 	for(int i=0; i<n; i++){
// 		for(int j = i; j<n; j++){
// 			//elements of subarray(i,j)
// 			curSum =0;
// 			for(int k=i; k<=j; k++){
// 				curSum += a[k];
// 				// cout<<a[k]<<" ";
// 			}
// 			// cout<<curSum<<endl;
// 			if(curSum> maxSum){
// 				maxSum = curSum;
// 				left = i;
// 				right = j;
// 			}
// 		}
// 	}
// 	cout<<maxSum<<endl;
// 	for(int k=left; k<=right; k++){
// 		cout<<a[k]<<" ";
// 	}
// 	return 0;
// }

//OPTIMIZED
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n+1];
// 	int cSum[n] = {0};
// 	int maxSum =0;
// 	int curSum = 0;
// 	int left = -1;
// 	int right = -1;
// 	cin>>a[0];
// 	cSum[0] = a[0];
// 	for(int i=1; i<n; i++){
// 		cin>>a[i];
// 		cSum[i] = cSum[i-1] + a[i];
// 	}
// 	//Generate all subarray
// 	for(int i=0; i<n; i++){
// 		for(int j = i; j<n; j++){
// 			//elements of subarray(i,j)
// 			curSum =0;
// 			curSum = cSum[j] - cSum[i-1];
// 			// cout<<curSum<<endl;
// 			if(curSum> maxSum){
// 				maxSum = curSum;
// 				left = i;
// 				right = j;
// 			}
// 		}
// 	}
// 	cout<<maxSum<<endl;
// 	for(int k=left; k<=right; k++){
// 		cout<<a[k]<<" ";
// 	}
// 	return 0;
// }

//Kadane's algorithm
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