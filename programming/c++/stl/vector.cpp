// vectors => dynamic array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    // create vector
    vector<int> v1; 

    // size of vector
    cout << v1.size() << endl;

    // adding elements in vector

    /// push back => add at last
    for(int i=0;i<5;i++){
        v1.push_back(i);
        cout << v1[i] << " ";
    }

    /// assign

    //// constant values
    v1.assign(5,100);
    cout << endl;
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }

    //// from array or list
    int a1[] = {1,2,3};
    v1.assign(a1,a1+3);
    cout << endl;
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }

    //// modify the vector
    v1.assign(v1.begin(),v1.begin() + 2);
    cout << endl;
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }

    //// initializer list
    v1.assign({5,6,7});
    cout << endl;
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }

    /// insert -> specific position
    v1.insert(v1.begin()+1,10);
    cout << endl;
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }

    /// emplace => insert , emplace_back => pushback

    // iterators

    /// begin(),end() => iterators pointing to first and last
    cout << endl;
    for(auto i=v1.begin();i != v1.end(); i++){
      cout << *i << " ";
    }

    /// rbegin(),rend() => reverse order
    cout << endl;
    for(auto i=v1.rbegin();i != v1.rend(); i++){
      cout << *i << " ";
    }

    // capacity

    /// resize(n) => resize the container to "n" elements
    v1.resize(3);
    cout << endl << v1.size();

    /// empty() => check whether the vector is empty
    cout << endl << v1.empty();
    
    // element accesss

    /// reference operator
    cout << endl << v1[0];

    /// at(n) => position
    cout << endl << v1.at(1);

    /// front(),back => first and last element
    cout << endl << v1.front() << " " << v1.back() << endl;

    /// data() => pointer to memory array
    auto *i = v1.data()+1;
    cout << *i << endl;

    // swap => swap one vector to other
    vector<int> v2;
    v2.assign({10,20,30});
    v1.swap(v2);
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }
    
    // deleting
    
    /// pop_back() => removes element from last
    v1.pop_back();
    cout << endl;
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }

    /// erase

    //// at particular position
    auto j = v1.begin()+1;
    v1.erase(j);
    cout << endl;
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }

    //// at range
    v1.assign({100,200,300,400,500,600});
    auto x = v1.begin()+2;
    auto y = v1.end();
    v1.erase(x,y);
    cout << endl;
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }

    // particular element
    v1.assign({1,2,3,4});
    v1.erase(remove(v1.begin(),v1.end(),2),v1.end());
    cout << endl;
    for(int i=0;i<v1.size();i++){
      cout << v1[i] << " ";
    }

    /// clear => removes all the elements
    v1.clear();
    cout << endl << v1.size();

}