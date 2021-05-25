#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define M 1000000007
#define messi ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void print(int i,int n){
	int c = n-i+1;
	char alph ='A';
	for(int j= 1; j<=c; j++){
		cout<<alph;
		alph++;
	}
	cout<<endl;
}
int main(){
	// int n;
	// cin>>n;
	// for(int i =1; i<=n; i++){
	// 	print(i, n);
		
	// }
	int n;
	cin>>n;
	//print the pattern
	//first component
	cout<<"*";
	for(int i=1; i<=(n-3)/2; i++){
		cout<<" ";
	}
	for(int i=1; i<=(n+1)/2; i++){
		cout<<"*";
	}
	cout<<endl;
	//second component
	for(int i=1; i<=(n-3)/2; i++){
		cout<<"*";
		//spaces
		for(int j =1; j<=(n-3)/2; j++){
			cout<<" ";
		}
		//star
		cout<<"*"<<endl;
	}
	//third component
	for(int i=1; i<=n; i++){
		cout<<"*";
	}
	cout<<endl;
	//fourth component
		//space
	for(int row=1; row<=(n-3)/2; row++){
		for(int i=1; i<=(n-3)/2 + 1; i++){
			cout<<" ";
		}
		//star
		cout<<"*";
		//spaces
		for(int i=1; i<=(n-3)/2; i++){
			cout<<" ";
		}

		//star
		cout<<"*"<<endl;
	}
	//fifth component
	//star
	for(int i=1; i<=(n+1)/2; i++){
		cout<<"*";
	}
	//spaces
	for(int i=1; i<=(n-3)/2; i++){
		cout<<" ";
	}
	//star
	cout<<"*"<<endl;
	return 0;
}