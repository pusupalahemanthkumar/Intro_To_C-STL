/* Queue In  C++ STL */
#include<bits/stdc++.h>
using namespace std;

void show(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	
}
int main(){
	int n;
	cout<<"Enter The Size :";
	cin>>n;

	queue<int> q;
	
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		q.push(t);
	}
	show(q);
	
	// Remove Element
	q.pop();
	show(q);
	
	cout<<" Front: "<<q.front()<<endl;
	cout<<" back: "	<<q.back()<<endl;
	cout<<" size :"<<q.size()<<endl;
	
	return 0;
}
