#include<bits/stdc++.h>
using namespace std;

class Car{
public:
	string name;
	int x, y;
	Car(){

	}
	Car(string n, int x, int y){
		name = n;
		this->x = x;
		this->y = y;
	}
	int dist(){
		return x*x + y*y;
	}
};

// bool compare(pair<int, int> p1, pair<int, int> p2){
// 	int d1 = p1.first*p1.first + p1.second*p1.second;
// 	int d2 = p2.first*p2.first + p2.second*p2.second;
// 	if(d1 == d2){
// 		return p1.first < p2.first;
// 	}
// 	return d1<d2;
// }

bool compare(Car A, Car B){
	int da = A.dist();
	int db = B.dist();

	if(da == db){
		// return A.x < B.x;
		return A.name.length() < B.name.length();
	}
	return da<db;
}

int main(){
	// vector<int> d{1,2,3,4,5};
	//------
	// int n;
	// cin>>n;
	// for(int i=0; i<n; i++){
	// 	int no;
	// 	cin>>no;
	// 	v.push_back(no);
	// }
	// for(auto i:v){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;

	// understand at memory level , 
	// what are the differences

	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	// cout<<v.max_size()<<endl;

//------------
// 	d.push_back(16);
// 	d.pop_back();
// 	//insert some elements in the middle
// 	d.insert(d.begin() +3, 100);
// 	d.insert(d.begin() +3, 4, 15);

// 	//erase some elements in the middle
// 	d.erase(d.begin()+2);
// 	d.erase(d.begin()+2, d.begin()+5);

// 	cout<<d.size()<<endl;
// 	cout<<d.capacity()<<endl;

// 	// we avoid the shrink
// 	d.resize(18); // if size will increase, more memory will be allocated
// 	cout<<d.capacity()<<endl;

// // removes elements, it won't delete memory occupied by array
// 	d.clear();

// 	cout<<d.size()<<endl;

// 	if(d.empty()){
// 		cout<<"It is empty"<<endl;
// 	}
// 	for(int x:d){
// 		cout<<x<<" ";
// 	}
// 	d.push_back(10);
// 	d.push_back(20);
// 	d.push_back(25);
// 	d.push_back(24);
// 	cout<<d.front()<<endl;
// 	cout<<d.back()<<endl;

// 	// reserve
// 	int n;
// 	cin>>n;
// 	vector<int> v;
// 	//to avoid doubling we will use reserve function

// 	v.reserve(1000);

// 	for(int i=0; i<n; i++){
// 		int no;
// 		cin>>no;
// 		v.push_back(no);
// 		cout<<"Changing capacity "<<v.capacity()<<endl;
// 	}
// 	cout<<"Capacity "<<v.capacity()<<endl;
// 	for(int x:v){
// 		cout<<x<<" ";
// 	}

	//-----------

	int n;
	cin>>n;
	// vector<pair<int,int> > v;

	vector<Car> v;

	for(int i=0; i<n; i++){
		int x,y;
		string name;
		cin>>name>>x>>y;
		Car temp(name, x, y);
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), compare);


	// for(auto p : v){
	// 	cout<<"car "<<p.first<<" "<<p.second<<endl;
	// }

	for(auto c : v){
		cout<<c.name<<" "<<c.dist()<<" Location "<<c.x<<" "<<c.y<<endl;	
	}

	return 0;
}