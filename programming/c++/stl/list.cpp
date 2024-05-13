/*

  list

  Lists are sequence containers that allow non-contiguous memory allocation. 
  As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time).
  Normally, when we say a List, we talk about a doubly linked list.

*/

#include<iostream>
#include<list>
using namespace std;

//remove if func
bool thirty(int value){
    return (value%3 == 0);
}

int main(){
    list<int> l1{10,20,5,15,30,25};

    // all op perfomed in vector

    // the following are extra operations perfomed in list

    // sort
    l1.sort();
    for(auto i=l1.begin();i != l1.end();i++){
        cout << *i << " ";
    }

    // splice => transfer elements and removes the elements in another list
    /*
    list1_name.splice (iterator position, list2)
    list1_name.splice (iterator position, list2, iterator i)
    list1_name.splice (iterator position, list2, iterator first, iterator last)
    */

    list<int> l2{50,60,70,80,90};
    l1.splice(l1.end(),l2);
    cout << endl;
    for(auto i=l1.begin();i != l1.end();i++){
        cout << *i << " ";
    }

    l2.assign({100,200,300});
    l2.splice(l2.end(),l1,l1.begin());
    cout << endl;
    for(auto i=l2.begin();i != l2.end();i++){
        cout << *i << " ";
    }
    
    l1.assign({500,600,700});
    l2.splice(l2.end(),l1,l1.begin(),l1.end());
    cout << endl;
    for(auto i=l2.begin();i != l2.end();i++){
        cout << *i << " ";
    }

    // merge => merges two list and removes the other
    l1.assign({30,20,10});
    l2.assign({70,60,50,50,50});
    l1.merge(l2);
    cout << endl;
    for(auto i=l1.begin();i != l1.end();i++){
        cout << *i << " ";
    }

    //remove => value
    l1.remove(10);
    cout << endl;
    for(auto i=l1.begin();i != l1.end();i++){
        cout << *i << " ";
    }

    //remove_if => function
    l1.remove_if(thirty);
    cout << endl;
    for(auto i=l1.begin();i != l1.end();i++){
        cout << *i << " ";
    }

    //unique => removes duplicate elements
    l1.unique();
    cout << endl;
    for(auto i=l1.begin();i != l1.end();i++){
        cout << *i << " ";
    }
}