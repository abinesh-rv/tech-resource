#include<iostream>
using namespace std;

#define size 2
int queue[size],front=0,rear=0;

void enqueue(int ele){
     queue[rear] = ele;
     rear++;
}

void dequeue(){
     for(int i=0;i<rear;i++){
        queue[front + i] = queue[front + i + 1];
     }
     rear--;
}

int main(){
    int ch;
    while(1){
    cout << "\n press 1 for enqueue \n press 2 for dequeue \n press 3 for display \n press 4 for exit \n enter your choice : ";
    cin >> ch;
    switch(ch){
        case 1:
        if(rear == size){
            cout << "queue is full";
            break;
        }
        int ele;
        cout << rear;
        cout << endl << "enter element to enqueue : ";
        cin >> ele;
        enqueue(ele);
        break;

        case 2:
        if(rear == front){
            cout << "queue is already empty";
            break;
        }
        dequeue();
        break;

        case 3:
        if(rear == front){
            cout << "queue is already empty";
            break;
        }

        cout << "elements in queue are : ";
        for(int i=front;i<=rear-1;i++){
            cout << queue[i] << "\t";
        }
        break;

        case 4:
           exit(0);

        default:
        cout << "enter valid choice \n";
    }
    }
}