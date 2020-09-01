/* BINARY SERACH IN C++ STL */

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int a[20],n,k;
	cout<<"Enter the size:"<<endl;
	cin>>n;
	
	cout<<"Enter the data: "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"Enter the Key: "<<endl;
	cin>>k;
	
	// Sorting Array First
	sort(a,a+n);
	
	// Performing Binary Serach 
	bool res=binary_search(a,a+n,k);
	cout<<res<<endl;
	
	if(res){
		cout<<"Found"<<endl;
	}else{
		cout<<"Not Found"<<endl;
	}
}
