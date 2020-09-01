/*  ALGORITHMS IN C++ STL  */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void show(vector<int> v){
	cout<<"Showing Data :";
	for(vector<int>::iterator i=v.begin();i!=v.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}

int main(){
	int a[] ={ 1, 2, 3, 2, 4, 2, 10, 11, 13, 1,10};
	int n=sizeof(a)/sizeof(a[0]);
	vector<int> v(a,a+n);
	
	cout<<"original Data :"<<endl;
	show(v);
	
	cout<<"After erase :"<<endl;
	// Deletes 9th element
	v.erase(v.begin()+8);
	show(v);
	
	// Removes Duplicates From Vectors
	//sorting to enable use of unique()
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	show(v);
	
	
}
