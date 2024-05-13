// map

/*
  Maps are associative containers that store elements in a mapped fashion. 
  Each element has a key value and a mapped value. 
  No two mapped values can have the same key values.
*/

#include<iostream>
#include<map>
using namespace std;

void showmap(map<string,int> tm){
    for(auto i=tm.begin();i != tm.end();i++){
        cout << "key : " << i->first << " , " << "value : " << i->second;
        cout << endl;
    }
}

int main(){
   //inserting
   map<string,int> m1;
   m1["one"] = 1;
   m1["two"] = 2;
   m1["three"] = 3;
   m1.insert(pair<string,int>("four",4));


   showmap(m1);

   //size
   cout << m1.size() << endl;

   //removing
   m1.erase("three");
   m1.erase(m1.begin(),m1.find("two"));

   showmap(m1);

   //count
   cout << m1.count("two") << endl;

   //print
   cout << m1["two"] << endl;


}