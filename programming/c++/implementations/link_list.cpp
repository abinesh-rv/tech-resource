#include<iostream>
using namespace std;

class node{
    public:
     int data;
     node* next;

     node(int value){
        this->data=value;
        this->next=NULL;
     }
};

node *head = NULL;

int listLen(){
    int count =0;
    node *temp = head;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}


void insertAtBegin(int value){
    node *newNode = new node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int value){
    node *newNode = new node(value);
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int pos,int ele){
    if(pos==1){
        insertAtBegin(ele);
    }
    else{
        int Length = listLen();
        if(pos > Length){
            cout << "position out of boundary" << endl;
        }
        else if(pos+1 == Length){
            insertAtEnd(ele);
        }
        else{
            node *temp1,*temp2;
            node *newNode = new node(ele);
            temp1=head;
            temp2=temp1->next;
            for(int i=1;i<Length;i++){
                if(i==pos-1){
                    temp1->next=newNode;
                    newNode->next=temp2;
                }else{ 
                    temp1=temp1->next;
                    temp2=temp1->next;
                }
            }
        }
    }
}

void deleteAtBegin(){
    node *temp;
    if(head == NULL){
        cout << "list is already empty" << endl;
    }
    else{
    temp=head;
    head=temp->next;
    delete temp;
    }
}

void deleteAtEnd(){
    node *temp1,*temp2;
    if(head == NULL){
        cout << "list is already empty" << endl;
    }else{
    temp1=head;
    temp2=temp1->next;
    while(temp2->next != NULL){
        temp1=temp1->next;
        temp2=temp1->next;
    }
    temp1->next=NULL;
    delete temp2;
    }
}

void  deleteAtPosition(int pos){
    if(head == NULL){
        cout << "the list is already empty" << endl;
    }
    else{
    if(pos==1){
        deleteAtBegin();
    }
    else{
        int Length = listLen();
        if(pos > Length){
            cout << "position out of boundary" << endl;
        }
        else if(pos == Length){
            deleteAtEnd();
        }
        else{
            node *temp1,*temp2;
            temp1=head;
            temp2=temp1->next;
            for(int i=1;i<Length;i++){
                if(i==pos-1){
                  temp1->next=temp2->next;
                  delete  temp2;
                }else{
                temp1=temp2;
                temp2=temp2->next;
                }
            }
        }
    }
    }
}

void display(){
    if(head==NULL){
        cout << "the list is empty" << endl;
    }
    else{
    node *temp = head;
    cout << "the elements in link list are : ";
    while(temp != NULL){
       cout << temp -> data << "\t";
       temp = temp->next;
    }
    }
}

void search(int ele){
    if(head==NULL){
        cout << "the list is empty" << endl;
    }
    else{
    node *temp = head;
    int pos=0;
    int length = listLen();
    for(int i=1;i<=length;i++){
       if(temp->data == ele){
        pos=i;
        break;
       }
       temp=temp->next;
    }
    if(pos==0){
        cout << "the element is not found in the list" << endl;
    }else{
        cout << "the element is found at position : " << pos << endl;
    }
    }
}

int main(){
    int ch,length,ele,pos;
    while(1){
    cout << "\n press 1 for ib \n press 2 for ip \n press 3 for il \n press 4 for db \n press 5 for dp \n press 6 for dl \n press 7 for display \n press 8 for displaying list length \n press 9 for searching ele position \n enter your choice : ";
    cin >> ch;
    switch(ch){
        case 1:
          cout << endl << "enter element to insert : ";
          cin >> ele;
          insertAtBegin(ele);
          break;

        case 2:
           cout << "enter position to insert : ";
           cin >> pos;
           cout << "enter element to insert : ";
           cin >> ele;
           insertAtPosition(pos,ele);
           break;

        case 3:
          cout << endl << "enter element to insert : ";
          cin >> ele;
          insertAtEnd(ele);
          break;

        case 4:
          deleteAtBegin();
          break;
        
        case 5:
          cout << "enter position to delete : ";
          cin >> pos;
          deleteAtPosition(pos);
          break;

        case 6:
          deleteAtEnd();
          break;
        
        case 7:
           display();
           break;

        case 8:
           length = listLen();
           cout << "the link list length is : " << length;
           break;

        case 9:
            int findData;
            cout << "enter the element to find its position in linkList" << endl;
            cin >> findData;
            search(findData);
            break;

        default:
            cout << "enter crt choices" << endl;
            break;
    }
}
}