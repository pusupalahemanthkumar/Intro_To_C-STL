/* Deque In C++ STL   */

#include<bits/stdc++.h>
using namespace std;

void show(deque<int> dq){
	for(deque<int>::iterator i=dq.begin();i!=dq.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
	
}

int main(){
	deque<int> dq;
	
	dq.push_back(10);
	dq.push_back(20);
	dq.push_front(1);
	dq.push_front(2);
	
	show(dq);
	
	cout<<"Size :"<<dq.size()<<endl;
	cout<<"Max Size :"<<dq.max_size()<<endl;
	
	cout<<"At :"<<dq.at(2)<<endl;
	cout<<"Front :"<<dq.front()<<endl;
	cout<<"Back :"<<dq.back()<<endl;
	
	dq.pop_back();
	show(dq);
	
	dq.pop_front();
	show(dq);
	
	
	
	return 0;
}
