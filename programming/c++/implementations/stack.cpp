#include<iostream>
using namespace std;
#define size 2
int stack[size],top=-1;

void push(int ele){
     top++;
     stack[top] = ele;
}

void pop(){
    top--;
}

int main(){
    int ch;
    while(1){
    cout << "\n press 1 for push \n press 2 for pop \n press 3 for display \n press 4 for exit \n enter your choice : ";
    cin >> ch;
    switch(ch){
        case 1:
        if(top == size-1){
            cout << "stack is full";
            break;
        }
        int ele;
        cout << endl << "enter element to push : ";
        cin >> ele;
        push(ele);
        break;

        case 2:
        if(top == -1){
            cout << "stack is already empty";
            break;
        }
        pop();
        break;

        case 3:
        if(top == -1){
            cout << "stack is already empty";
            break;
        }
        cout << top;
        cout << "elements in stack are : ";
        for(int i=top;i>=0;i--){
            cout << stack[i] << "\t";
        }
        break;

        case 4:
           exit(0);

        default:
        cout << "enter valid choice \n";
    }
    }
}