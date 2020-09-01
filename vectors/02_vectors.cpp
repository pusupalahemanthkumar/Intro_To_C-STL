/* More On Vectors In C++ STL */

//#include<iostream>
//#include<vector>
//#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t[]= { 1, 2, 3, 4, 5};
    //vector<int> a= { 1, 2, 3, 4, 5};
    vector<int> a(t,t+5);
    cout<<"First Element :"<<*a.begin()<<endl;
    cout<<"Last Element :"<<*(a.end()-1)<<endl;
    
    cout<<"rbegin() : "<<*a.rbegin()<<endl;
    cout<<"rend() :"<<*(a.rend()-1)<<endl;
    
    cout<<"Data :"<<endl;
    for(vector<int>::iterator i = a.begin(); i!=a.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    
    cout<<"Data in Reverse Order:"<<endl;
    
    for(auto i = a.rbegin(); i!=a.rend();i++){
        cout<<*i<<" ";
    }
    
    
    cout<<"Size :"<<a.size()<<endl;
    cout<<"is Empty: "<<a.empty()<<endl;
    

}
