/* Sets In C++ STL */
#include<bits/stdc++.h>
using namespace std;

void show(set<int> s){
	for(set<int>::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}
void show1(set<int , greater<int> > s){
	for(set<int, greater <int> >::iterator i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}


int main(){
	int n;
	cout<<"Enter The Size:";
	cin>>n;
	set<int> s;
	set<int , greater<int> > s1;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		s.insert(t);
		s1.insert(t);
	}
	cout<<"Size :"<<s.size()<<endl;
	show(s);
	
	cout<<"Size :"<<s1.size()<<endl;
	show1(s1);
	
	//Delete By Value
	s.erase(2);
	show(s);
	
	// Delete By Iterator 
	s.erase(s.begin());
	show(s);
	
	s.erase(s.begin(),s.end());
	cout<<"Deleted All"<<endl;
	show(s);
		
	return 0;
}
