// array => extra operations than normal c++ arrays

#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,6> a = {10,20,40,50};
    
    // size 
    cout << a.size() << endl;

    //at => accessing
    cout << a.at(1) << endl;

    //front and back => first and last element reference
    cout << a.front() << " " << a.back() << endl;

    //empty => to check whether the array is empty
    cout << a.empty() << endl;

    //fill => fill elements with value
    a.fill(100);
    for(auto i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}