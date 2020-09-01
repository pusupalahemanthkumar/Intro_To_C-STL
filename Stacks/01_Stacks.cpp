/*  Stacks In C++ STL  */
#include<bits/stdc++.h>

using namespace std;

void show(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

int main(){
	int n;
	cout<<"Enter The Size :";
	cin>>n;
	 
	stack<int> s;
	
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		s.push(t);
	}
	cout<<"Size :"<<s.size()<<endl;
	show(s);
	// Removes Last Element
	s.pop();
	show(s);
	
	cout<<"Size :"<<s.size()<<endl;
	
	return 0;
}
