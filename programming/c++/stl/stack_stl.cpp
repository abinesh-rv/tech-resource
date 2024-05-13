// stack => last in and first out

#include<iostream>
#include<stack>
using namespace std;

void shows(stack<int> s){
    stack<int> ts = s;
    while(!(ts.empty())){
        cout << ts.top() << " ";
        ts.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s;

    //inserting
    for(auto i=0;i<5;i++){
        s.push(i);
    }

    shows(s);

    //size
    cout << s.size() << endl;

    //top
    cout << s.top() << endl;

    //deleting
    s.pop();
    shows(s); 

}