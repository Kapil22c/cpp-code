#include<bits/stdc++.h>
using namespace std;

int maxSumSubmatrix(int **arr, int n, int m){
	//col wise addition
	for(int i=n-1; i>=0; i--){
		for(int j=m-2; j>=0; j--){
			arr[i][j] += arr[i][j+1];
		}
	}
	//row wise addition
	for(int i = m-1; i>=0; i--){
		for(int j = n-2; j>=0; j--){
			arr[j][i] += arr[j+1][i];
		}
	}

	int res = INT_MIN;
	for(int i=0; i<n; i++){
		for(int j =0; j<m; j++){
			res = max(res, arr[i][j]);
		}
	}
	return res;
}

int main(){
	// int a, b;
	// cin>>a>>b;
	// int mat[a][b];
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		cin>>mat[i][j];
	// 	}
	// }
	// int sum = 0;
	// for(int li =0; li<a; li++){
	// 	for(int lj = 0; lj<b; lj++){
	// 		for(int bi=0; bi<a; bi++){
	// 			for(int bj=0; bj<b; bj++){
	// 				for(int i=li; i<=bi; i++){
	// 					for(int j=lj; j<=bj; j++){
	// 						sum += mat[i][j];
	// 					}
	// 				}
	// 			}
	// 		}
	// 	}
	// }
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		int tl = (i+1)*(j+1);
	// 		int br = (a-i)*(b-j);
	// 		sum += mat[i][j] *(tl*br);
	// 	}
	// }
	// cout<<sum<<endl;
	// int n,m;
	// cin>>n>>m;
	// int **arr = new int*[n];
	// for(int i=0; i<n; i++){
	// 	arr[i] = new int[m];
	// }
	// for(int i=0; i<n; i++){
	// 	for(int j =0; j<m; j++){
	// 		cin>>arr[i][j];
	// 	}
	// }
	// cout<<maxSumSubmatrix(arr, n, m)<<endl;

	int a, b;
	cin>>a>>b;
	int m[a][b];
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cin>>m[i][j];
		}
	}
	int key;
	cin>>key;
	int x =0;
	int y = b-1;
	int r = m[x][y];
	while(r != key){
		if(key > r){
			r = m[++x][y];
		}else{
			r = m[x][--y];
		}
	}
	cout<<x<<" "<<y;

}