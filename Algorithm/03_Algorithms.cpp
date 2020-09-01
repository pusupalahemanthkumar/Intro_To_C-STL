/* ALGORITHM LIBRARY TRICKS  */

#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> // For accumulate operation

using namespace std;

void show(vector<int> v,int n){
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
}

int main(){
	int a[]= { 10, 20, 5, 23, 42, 15};
	
	// Find Size 
	int n = sizeof(a)/sizeof(a[0]);
	
	vector<int> v(a,a+n);
	
	// Printing Vector Data
	cout<<"Printing Vector Data : ";
	show(v,n);
	
	// Sorting the vector in Ascending order
	sort(v.begin(),v.end());
	
	//Printing Vector After Sorting
	cout<<"Data After Sorting : ";
	show(v,n);
	
	// Reversing the vector
	reverse(v.begin(),v.end());
	
	// Printing Vector After Reverse
	cout<<"Data After Reversing : ";
	show(v,n);
	
	//Maximum Element
	cout<<"Maximum Element :"<<*max_element(v.begin(),v.end())<<endl;
	
	//Minimum Element
	cout<<"Minimum Element :"<<*min_element(v.begin(),v.end())<<endl;
	
	// Summation 
	cout<<"Summation :"<<accumulate(v.begin(),v.end(),0)<<endl;
	
	
}

