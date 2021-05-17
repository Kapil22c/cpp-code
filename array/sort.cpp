#include<bits/stdc++.h>
using namespace std;

//selection sort
void selection_sort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int min_ind = i;
		for(int j=i; j<n-1; j++){
			if(a[j] < a[min_ind]){
				min_ind =j;
			}
		}
		// after this we can swap 
		swap(a[i], a[min_ind]);
	}
}
void bubble_sort(int a[], int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j] < a[i]){
				swap(a[i], a[j]);
			}
		}
	}
}
void insertion_sort(int a[], int n){
	for(int i=1; i<=n-1; i++){
		int e = a[i];
		int j = i-1;
		while(j>=0 and a[j]>e){
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] =e;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	// selection_sort(arr, n);
	// bubble_sort(arr, n);
	insertion_sort(arr, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


