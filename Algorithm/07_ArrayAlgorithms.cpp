/* Array Algorithm In C++ STL */

#include<iostream>
#include<algorithm>
#include<numeric> // for iota

using namespace std;

int main(){
	int a[6]={ 1, 2, 3, 4, 5, -6};
	
	// Checking if all elements are positive
	all_of(a,a+6,[](int x){
		return x>0;
	}) ? cout<<"ALL are Positive Elements:"<<endl :
		cout<<"All Are Not Positive Elements"<<endl;
		
		
	// Checking if any element is negative
	any_of(a,a+6, [](int x){
		return x<0;
	}) ? cout<<"There exists a negative element"<<endl :
		cout<<"All are postive elements"<<endl;
		
	//Checking if no element is negative
	none_of(a,a+6, [](int x){
		return x<0;
	})? cout<<"No Negative Eleemnts"<<endl :
		cout<<"There are negative elements"<<endl;
		
	// Copying Data
	int a1[6];
	copy_n(a,6,a1);
	
	//iota
	int a2[6]={0};
	iota(a2,a2+6,20);
	
	for(int i=0;i<6;i++){
		cout<<a2[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}



