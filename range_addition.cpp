#include<bits/stdc++.h>
using namespace std;

int main(){
	int length,n;
	cin>>length>>n;
	int a[100][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}

	vector<int> v;
	for(int i=0; i<length; i++){
		v.push_back(0);
	}
	for(int i=0; i<n; i++){
		int start = a[i][0];
		int end = a[i][1];
		int val = a[i][2];

		v[end]+= val;
		if(start!=0){
			v[start-1]-=val;
		}
		
	}
	// add contributeion from right side
	for(int i=length-2; i>=0; i--){
		v[i]+=v[i+1];
	}

	for(int i=0; i<length; i++){
		cout<<v[i]<<" ";
	}
	return 0;
}