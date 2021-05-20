#include<bits/stdc++.h>
using namespace std;

//target sum problem
void targetSum(int *arr, int n, int target)
{
    sort(arr, arr + n);
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum > target)
        {
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            cout << arr[left] << " and " << arr[right] << endl;
            left++;
            right--;
        }
    }
}

// void triplet(int *arr, int n, int target){
// 	sort(arr, arr + n);

// }

int main() {
	// int n, m;
	// cin>>n>>m;
	// int a[n][m];
	// for(int i=0; i<n; i++){
	// 	for(int j=0; j<m ; j++){
	// 		cin>>a[i][j];
	// 	}
	// }
	// for(int i=0; i<n; i++){
	// 	for(int j=0; j<m ; j++){
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// for(int j = 0; j<m; j++){
	// 		if(j%2 == 0){
	// 			for(int i = 0; i<n; i++){
	// 				cout<<a[i][j]<<", ";
	// 			}
	// 		}
	// 		else{
	// 			for(int i = n-1; i>=0; i--){
	// 				cout<<a[i][j]<<", ";
	// 			}
	// 		}
	// 	}
		
	// cout<<"END"<<endl;

	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	sort(arr, arr+n);
	for(int i=0; i<n-1; i++){
		int x = arr[i];
		int left = i+1;
		int right = n-1;
		int target = key - x;
		 while (left < right)
   		{
        	int sum = arr[left] + arr[right];
        	if (sum > target)
        	{
            	right--;
        	}
        	else if (sum < target)
        	{
            	left++;
        	}
        	else
        	{
            	cout <<arr[i]<<", " << arr[left] << " and " << arr[right] << endl;
            	left++;
            	right--;
        	}
    	}
	}

	return 0;
}