/*  Algorithms In C++ STL */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int a[] = { 1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(a[0]);
	vector<int> v(a,a+n);
	
	cout<<"Maximum Element Index :"<<distance(v.begin(),max_element(v.begin(),v.end()))<<endl;
}
