/* HEAPS IN C++ STL */

#include<bits/stdc++.h>
using namespace std;

void show(vector<int> v){
	for(vector<int>::iterator i =v.begin();i!=v.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}

int main(){
	int n;
	cout<<"Enter The Size :"<<endl;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		v.push_back(t);
	}
	//Converting Vector into Heap
	make_heap(v.begin(),v.end());
	//Getting Maximum Element
	cout<<"MAXIMUM ELEMENT :"<<v.front()<<endl;
	
	//Displaying Heap Content Here
	show(v);
	
	//Insertion
	v.push_back(89);
	push_heap(v.begin(),v.end());
	show(v);
	cout<<"MAXIMUM ELEMENT :"<<v.front()<<endl;
	
	//Deleting  the Maximum Element
	pop_heap(v.begin(),v.end());
	v.pop_back();
	show(v);
	cout<<"MAXIMUM ELEMENT :"<<v.front()<<endl;
	
	return 0;
}

