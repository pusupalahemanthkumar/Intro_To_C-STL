/* Priority Queue In C++ STL */

/*  By Default it implements max heap*/
#include<bits/stdc++.h>

using namespace std;

void show(priority_queue<int> pq){
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;
	
}
int main(){
	priority_queue<int> pq;
	
	pq.push(10);
	pq.push(20);
	pq.push(30);
	pq.push(40);
	
	show(pq);
	  
	pq.pop();
	show(pq);
	
	cout<<"Size :"<<pq.size()<<endl;
	
	 
	
	
	return 0;
}
