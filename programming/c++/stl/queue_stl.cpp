// queue => first in and first out

#include<iostream>
#include<queue>
using namespace std;

void showq(queue<int> q){
    queue<int> tq = q;
    while(!(tq.empty())){
        cout << tq.front() << " ";
        tq.pop();
    }
    cout << endl;
}

int main(){
    queue<int> q;
    
    //inserting
    for(auto i=0;i<5;i++){
        q.push(i);
    }

    showq(q);

    //size
    cout << q.size() << endl;

    //front and back
    cout << q.front() << " " << q.back() << endl;

    //deleting
    q.pop();
    showq(q); 

}