/* ALGORITHM C++ STL */

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int a[]={ 10, 20, 5, 23, 42, 20, 15};
	int n=sizeof(a)/sizeof(a[0]);
	vector<int> v(a,a+n);
	
	// Occurence
	cout<<"Occurence Of 20: "<<count(v.begin(),v.end(),20)<<endl;
	
	// Find
	vector<int>::iterator findRes= find(v.begin(),v.end(),5);
	
	cout<<*findRes<<endl;
	
	// Find return iterator to last address if element not present
	find(v.begin(),v.end(),23) !=v.end() ? 
	cout<<"Found Element"<<endl : cout<<"Not Found"<<endl;
	
	// lowe_bound and upper_bound
	vector<int>::iterator it =lower_bound(v.begin(),v.end(),20); // >=
    vector<int>::iterator it2= upper_bound(v.begin(),v.end(),21); // >
    
    cout<<" lower bound & upper bound :";
    cout<<*it <<" "<<*it2<<endl;
	
	return 0;
	
}

