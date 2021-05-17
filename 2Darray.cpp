#include<iostream>
using namespace std;
void spiralPrint(int a[][1000], int m, int n){
	int sr = 0;
	int sc = 0;
	int er = m-1;
	int ec = n-1;
 	while(sr<=er and sc<=ec){
 		for(int i=sc; i<=ec; i++){
 			cout<<a[sr][i]<<" ";
 		}
 		sr++;
 		for(int i= sr; i<=er; i++){
 			cout<<a[i][ec]<<" ";
 		}
 		ec--;
 		if(er>sr){
 			for(int i=ec; i>=sc; i--){
 			cout<<a[er][i]<<" ";
 		}
 		er--;
 		}
 		if(ec>sc){
 			for(int i=er; i>=sr; i--){
 			cout<<a[i][sc]<<" ";
 		}
 		sc++;
 		}
 		
 	}	
}
int main(){
	// int a[4][5] ={0};
	// int val = 1;
	// for(int i=0; i<4; i++){
	// 	for(int j=0; j<5; j++){
	// 		a[i][j] = val;
	// 		val++;
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
		int a[1000][1000] = {0};
		int m, n;
		cin>>m>>n;
		
		int val =1;
		for(int i =0; i<=m-1; i++){
			for(int j=0; j<=n-1; j++){
				a[i][j] = val;
				val = val +1;;
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		spiralPrint(a,m,n);
	return 0;
}