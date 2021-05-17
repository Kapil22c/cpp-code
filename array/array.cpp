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
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	int i=0;
	int j = sizeof(n)/sizeof(int) - 1;
	while(i<j){
		int cSum = a[i] + a[j];
		if(cSum > key){
			j--;
		}
		else if(cSum<key){
			i++;
		} 
		else if(cSum == key){
			cout<<a[i]<<" "<<a[j]<<endl;
			i++;
			j--;
		}
	} 

	//Generate all subarray
	// for(int i=0; i<n; i++){
	// 	for(int j = i; j<n; j++){
	// 		//elements of subarray(i,j)
	// 		for(int k=i; k<=j; k++){
	// 			cout<<a[k]<<" ";
	// 		}
	// 		cout<<endl;
	// 	}
	// }
	// cin>>key;
	// int size = sizeof(n)/sizeof(int);
	
	return 0;
}