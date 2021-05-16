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
	int n;
	cin>>n;
	for(int i =1; i<=n; i++){
		print(i, n);
		
	}
}