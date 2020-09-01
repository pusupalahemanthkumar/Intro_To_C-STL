/* Maps In C++ STL */
#include<bits/stdc++.h>

using namespace std;

void show(map<int, int> m){
	for(map<int,int>::iterator i=m.begin();i!=m.end();i++){
		cout<<i->first<<" :"<<i->second<<endl;
	}
	cout<<endl;
}
int main(){
	int n;
	cout<<"Enter The Size :";
	cin>>n;
	
	map<int,int> m;
	for(int i=0;i<n;i++){
		int k,v;
		cin>>k>>v;
		m.insert(pair<int,int>(k,v));
	}
	show(m);
	
	map<int,int> m1;
	for(int i=1;i<=10;i++){
		m1[i]++;
	}
	
	m1[1]++;
	show(m1);
	
	// Remove By Key Value
	m1.erase(3);
	show(m1);
	
	//Removing Keys less than 4
	m1.erase(m1.begin(),m1.find(4));
	show(m1);
	
   return 0;
}
