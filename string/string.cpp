#include<bits/stdc++.h>
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
	// char s[100] ="Today, is a rainy day";
	// char *ptr = mystrtok(s, ' ');
	// cout<<ptr<<endl;
	
	// while(ptr != NULL){
	// 	ptr = mystrtok(NULL, ' ');
	// 	cout<<ptr<<endl;
	// }	
	string a;
	string b("Kapil");
	string c = "Bavisiya";
	string d(c);
	string e = d;
	char f[] = {'k','a','p','i','l','\0'};
	string g(f);

	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	cout<<g<<endl;

	if(a.empty()){
		cout<<"it's empty"<<endl;
	}

	a.append("Hii there");
	cout<<a<<endl;
	a+= " also how's you?";
	cout<<a<<endl;

	//remove or erase the content
	cout<<a.length()<<endl;
	a.clear();
	cout<<a.length()<<endl;

	//compare string
	a = "Apple";
	b = "Mango";
	cout<<a.compare(b)<<endl;
	cout<<b.compare(a)<<endl;
	cout<<a.compare(a)<<endl;

	if(a>b){
		cout<<"Apple is longer"<<endl;
	}else{
		cout<<"Mango is longer"<<endl;
	}

	string s = "I want to have apple juice";
	int idx = s.find("apple");
	cout<<idx<<endl;

	string word = "apple";
	int len = word.length();
	s.erase(idx, len+1);
	cout<<s<<endl;

	for(int i=0; i<a.length(); i++){
		cout<<a[i];
		if(i!= a.length()-1){
			cout<<":";
		}
	}
	cout<<endl;
	for(auto it=b.begin(); it!=b.end(); it++){
		cout<<(*it);
		if(it!=b.end()-1){
			cout<<",";
		}
	}
	cout<<endl;
	for(auto x:a){
		cout<<x<<".";
	}
	return 0;
}