#include<bits/stdc++.h>
using namespace std;

void rotate(int a[][100], int n){
	for(int i=0; i<n; i++){
		int start_col =0;
		int end_col = n-1;
		while(start_col<end_col){
			swap(a[i][start_col], a[i][end_col]);
			start_col++;
			end_col--;
		}
	}
	//to take transpose
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i<j){
				swap(a[i][j], a[j][i]);
			}
		}
	}		
}
void rotate_stl(int a[][100], int n){
	for(int i=0; i<n; i++){
		reverse(a[i], a[i]+n);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i<j){
				swap(a[i][j], a[j][i]);
			}
		}
	}
}
void staircase(int a[][100], int n){
	int i=0, j=n-1;
	int search = 12;
	while(a[i][j] != search){
		if(a[i][j] < search) i++;
		else if(a[i][j] > search) j--;
	}
	cout<<i<<" "<<j<<endl;
}
void display(int a[][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int a[100][100];
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	// rotate(a,n);
	// rotate_stl(a, n);
	staircase(a,n);
	// display(a,n);
}