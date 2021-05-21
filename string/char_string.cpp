#include<bits/stdc++.h>
using namespace std;

void readline(char a[], int maxLen, char delim){
	int i=0;
	char ch = cin.get();
	while(ch != delim){
		a[i] = ch;
		i++;
		if(i== (maxLen -1)){
			break;
		}
		ch = cin.get();
	}
	a[i] = '\0';
	return;
}
bool isPalindrome(char a[]){
	int i=0;
	int j= strlen(a)-1;
	while(i<j){
		if(a[i] == a[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}
	return true;
}

//remove a consecutive duplicate from a string
//ccooooddinnnnnng ----> coding
void removeDuplicates(char a[]){
	int l = strlen(a);
	if(l==1 || l==0){
		return;
	}
	int prev =0;
	for(int cur=1; cur<l; cur++){
		if(a[cur] != a[prev]){
			prev++;
			a[prev] = a[cur];
		}
	}
	a[prev+1] = '\0';
	return;
}


int main(){
	// char a[100][100];
	// int n;
	// cin>>n;
	// cin.get();
	// for(int i=0; i<n; i++){
	// 	cin.getline(a[i], 100);
	// }

	// //print all 
	// for(int i=0; i<n; i++){
	// 	cout<<a[i]<<endl;
	// }

	// char a[] = {'a', 'b', 'c', 'd', '\0'};
	// cout<<a<<endl;

	// char s1[] = {'h','e','l','l','o'};
	// char s2[] = "hello";
	// cout<<s1<<" "<<sizeof(s1)<<endl;
	// cout<<s2<<" "<<sizeof(s2)<<endl;

	// char s3[10] = "hello";
	// char s4[10];
	// cin>>s4;
	// cout<<s3<<endl;
	// cout<<s4<<endl;

	// char a[1000];
	// // readline(a, 1000, '$');
	// cin.getline(a, 1000, '$'); // if you don't specify that char.. it will automatically terminates on new line
	// // cin.getline(a, 1000);
	// cout<<a<<endl;
	// return 0;

	// char a[1000];
	// cin.getline(a, 1000);

	// int b = isPalindrome(a);
	// if(b) cout<<"YES"<<endl;
	// else cout<<"No"<<endl;

	// removeDuplicates(a);
	// cout<<a<<endl;

	int n;
	cin>>n;

	char a[1000];
	char largest[1000];
	int len=0;
	int largest_len =0;
	cin.get();
	for(int i=0;i<n; i++){
		cin.getline(a, 1000);
		// cout<<a<<endl;
		len = strlen(a);
		if(len> largest_len){
			largest_len = len;
			strcpy(largest, a);
		}
	}
	cout<<largest<<" and length: "<<largest_len<<endl;
	return 0;
}	