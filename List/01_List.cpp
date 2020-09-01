/* List  In C++ STL  */

#include<bits/stdc++.h>
using namespace std;

void show(list<int> l){
	for(list<int>::iterator i= l.begin();i!=l.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
	
}
int main(){
	
	//List
	list<int> l1;
	
	int n;
	cout<<"Enter The Size :"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
        l1.push_back(t);
        //l1.push_front(t);
	}
	show(l1);
	
	// Gives First Element in Linked List
	cout<<" front() :"<<l1.front()<<endl;
	
	// Gives Last Element in Linked List
	cout<<" back(): "<<l1.back()<<endl;
	
	//Removes First Element
	l1.pop_front();
	show(l1);
	
	//Removes Last Element
	l1.pop_back();
	show(l1);
	
	//Reverse
	l1.reverse();
	show(l1);
	
	//Sorting 
	l1.sort();
	show(l1);
	
	//Inserting
	l1.insert(l1.begin(),89);
	show(l1);
	
	list<int>::iterator it =l1.begin();
	// Thrid Position (according to human)
	advance(it,2);
	
	l1.insert(it,100);
	show(l1);
	
	//Deleting  By Iterator
	l1.erase(l1.begin());
	show(l1);
	
	//Delete By Value
	l1.remove(5);
	
	
}
