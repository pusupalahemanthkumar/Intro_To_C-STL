/*		Vectors		*/

#include<bits/stdc++.h>

using namespace std;

void show(vector<int> v){
	for(vector<int>::iterator i=v.begin();i!=v.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	vector<int> v;
	
	// Replaces with new Values;
	//v.assign(5,10);
	//show(v);
	
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		v.push_back(t);
	}
	show(v);
	
	// Gives First Element
	cout<<"First Element :"<<v.front()<<endl;
	// Gives Last Element
	cout<<"Last Element :"<<v.back()<<endl;
	
	
	
	//Removes Last Element
	v.pop_back();
	show(v);
	
	//Insertion
	v.insert(v.begin()+1,10);
	show(v);
	
	//Insertion At Front
	v.insert(v.begin(),99);
	show(v);
	
	v.erase(v.begin()+1);
	show(v);
	
}
