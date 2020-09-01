/* Introduction To C++ STL */

/* Introduction To Vectors In C++ STL  */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int a[]= { 10, 2, 39, 4, 59 };
    //C++ STL
//    vector<int> A = { 10, 2, 39, 4, 59 };
    
    vector<int> A(a,a+5);
    cout<<"Introduction To C++ STL "<<endl;
    cout<<A[1]<<endl;
    
    // Sorting
    sort(A.begin(),A.end()); // O(nlog(n))
    
    // Binary Search  O(log(n))
    bool present =binary_search(A.begin(),A.end(),39);
    cout<<"binary_search :"<<present<<endl;
    
    // Insert End
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    
    vector<int>::iterator it =lower_bound(A.begin(),A.end(),100); // >=
    vector<int>::iterator it2= upper_bound(A.begin(),A.end(),100); // >
    
    
    cout<<*it <<" "<<*it2<<endl;
    
    // TO Find The Occurence of 100 
    cout<<"Occurence Of 100 :"<<it2-it<<endl;
    
}
