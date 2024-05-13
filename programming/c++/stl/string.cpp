#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str;

    // user input
    getline(cin,str);
    cout << str << endl;

    // insert
    str.push_back('i');
    cout << str << endl;

    // delete
    str.pop_back();
    cout << str << endl;

    // length
    cout << str.length() << endl;

    // begin(),end(),rbegin(),rend()

    //split
    string str2;
    getline(cin,str2);
    stringstream strs(str2);
    string words;
    while(strs >> words){
        cout << words << endl;
    }
}