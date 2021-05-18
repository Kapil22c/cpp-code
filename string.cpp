#include<bits/stdc++.h>
#include<string>
using namespace std;
bool compare(string a, string b){
	if(a.length() == b.length()){
		return a>b;
	}
	return a.length() > b.length();
}

char *mystrtok(char *str, char delim){
	static char*input=NULL;
	if(str != NULL){
		input = str;
	}
	//check the base case
	if(input == NULL){
		return NULL; 
	}

	//start extracting token
	char *output = new char[strlen(input)+1];
	int i=0;
	for( ;input[i]!='\0';i++)
	{
		if(input[i] != delim){
		 	output[i] = input[i];	
		}else {
			output[i] = '\0';
			input = input +i +1;
			return output;
		}
	}
	// corner case
	output[i] ='\0';
	input =NULL;
	return output;
}

int main(){
	// int n;
	// cin>>n;
	// cin.get();
	// string s[100];
	// for(int i=0; i<n; i++){
	// 	getline(cin, s[i]);
	// }
	// sort(s, s+n, compare);
	// for(int i=0; i<n; i++){
	// 	cout<<s[i]<<endl;
	// }
	char s[100] ="Today, is a rainy day";
	char *ptr = mystrtok(s, ' ');
	cout<<ptr<<endl;
	
	while(ptr != NULL){
		ptr = mystrtok(NULL, ' ');
		cout<<ptr<<endl;
	}	
	return 0;
}