// set

/*
   Sets are a type of associative container in which each element has to be unique because the value of the element identifies it.
   The values are stored in a specific sorted order i.e. either ascending or descending.
*/

/*
Properties

Storing order – The set stores the elements in sorted order.
Values Characteristics – All the elements in a set have unique values.
Search Technique – Sets follow the Binary search tree implementation.
Arranging order – The values in a set are unindexed.
*/

#include<iostream>
#include<set>
using namespace std;

void showset(set<int> s){
    for(auto i=s.begin();i!=s.end();i++){
        cout << *i << " ";
    }
    cout << endl;
}

int main(){
   set<int> s1;

   //adding
   s1.insert(10);
   s1.insert(20);
   s1.insert(50);
   s1.insert(60);   
   s1.insert(30);

   showset(s1);

   //assigning to other set
   set<int> s2(s1.begin(),s1.end());
   showset(s2);

   //removing
   s2.erase(30);
   showset(s2);

   // find 
   s2.erase(s2.begin(),s2.find(20));
   showset(s2);

   //lower_bond and upper_bond
   cout << *s2.lower_bound(20) << " " << *s2.upper_bound(20);


}