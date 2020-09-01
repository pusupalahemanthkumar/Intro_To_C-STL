/* SORTING IN C++ STL*/

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int a[]={10,23,1,10,0,11,9,78};
	// Sorting IN Ascending Order
	sort(a,a+8);
	for(int i=0;i<8;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	// Sorting In Descending Order
	sort(a,a+8,greater<int>());
	for(int i=0;i<8;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;	
}
