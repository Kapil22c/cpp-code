#include<bits/stdc++.h>
using namespace std;

// int binary_search(int a[], int size, int key){
// 	int s=0;
// 	int e =size-1;
// 	while(s<=e){
// 		int mid = (s+e)/2;
// 		if(a[mid] == key){ 
// 			return mid;
// 		}
// 		else if(a[mid] > key){
// 			e = mid-1;
// 		}
// 		else {
// 			s = mid+1;
// 		}
// 	}
// 	return -1;
// }


int main(){
	int n,key;
	cin>>n;
	int a[n+1];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	//Generate all subarray
	for(int i=0; i<n; i++){
		for(int j = i; j<n; j++){
			//elements of subarray(i,j)
			for(int k=i; k<=j; k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
	// cin>>key;
	// int size = sizeof(n)/sizeof(int);
	
	// cout<<binary_search(a, n, key)<<endl;
	return 0;
}