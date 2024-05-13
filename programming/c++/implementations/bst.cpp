#include<iostream>
using namespace std;

class bst{
    public:
    bst* left=NULL;
    bst* right=NULL;
    int data;
};

bst* insert(bst* node,int ele){
    if(node == NULL){
        bst* temp = new bst();
        temp->data = ele;
        node=temp;
        return node;
    }
    else if(ele > node->data){
        node->right = insert(node->right,ele);
    }
    else if(ele < node->data){
        node->left = insert(node->left,ele);
    }
}


bst* minNode(bst* node){
   if(node->left==NULL){
       return node;
   }
   minNode(node->left);
}

bst* maxNode(bst* node){
   if(node->right==NULL){
       return node;
   }
   maxNode(node->right);
}

void inorder(bst* node){
    if(node == NULL){
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void preorder(bst* node){
    if(node == NULL){
        return;
    }
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(bst* node){
    if(node == NULL){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

bst* search(bst* node,int ele){
    if(node == NULL || node->data == ele){
        return node;
    }
    if(node->data > ele){
        return search(node->left,ele);
    }else{
        return search(node->right,ele);
    }
}

bst* deleteNode(bst* node,int ele){
    if(node->data < ele){
        node->right = deleteNode(node->right,ele);
        return node;
    }
    else if(node->data > ele){
        node->left = deleteNode(node->left,ele);
        return node;
    }
    if(node->left == NULL && node->right == NULL){
        delete node;
        return NULL;
    }
    else if(node->left == NULL){
        bst* temp = node->right;
        delete node;
        return temp;
    }
    else if(node->right == NULL){
        bst* temp = node->left;
        delete node;
        return temp;
    }
    else{
        bst *succParent = node,*succ = node->right;
        while(succ->left != NULL){
            succParent = succ;
            succ=succ->left;
        }
        node->data=succ->data;
        if(succ->right != NULL){
            succParent->left=succ->right;
        }
        else{
            succParent->left=NULL;
        }
        delete succ;
        return node;
    }

}                                   


int main(){
    bst* root = NULL,*min,*max,*node;
    int ch,ele;
    while(1){
    cout << "\n press 1 for insert \n press 2 for delete \n press 3 for inorder \n press 4 for preorder \n press 5 for postorder \n  press 6 for minNode \n press 7 for maxNode \n press 8 for search \n enter your choice : ";
    cin >> ch;
    switch(ch){
        case 1:
        cout << "enter the element to insert : ";
        cin >> ele;
        root=insert(root,ele);
        break;

        case 2:
        if(root == NULL){
           cout << "the bst is already empty" << endl;
           break;
        }
        cout << "enter the element to delete : ";
        cin >> ele;
        node = search(root,ele);
        if(node == NULL){
            cout << "the element is not present" << endl;
        }else{
        root = deleteNode(root,ele);
        }
        break;

        case 3:
        if(root == NULL){
           cout << "the bst is already empty" << endl;
           break;
        }
        cout << "inorder traversal : ";
        inorder(root);
        break;

        case 4:
        if(root == NULL){
           cout << "the bst is already empty" << endl;
           break;
        }
        cout << "preorder traversal : ";
        preorder(root);
        break;

        case 5:
        if(root == NULL){
           cout << "the bst is already empty" << endl;
           break;
        }
        cout << "postorder traversal : ";
        postorder(root);
        break;

        case 6:
        min = minNode(root);
        cout << "min ele : " << min->data << endl;
        break;

        case 7:
        max = maxNode(root);
        cout << "max ele : " << max->data << endl;
        break;

        case 8:
        if(root == NULL){
            cout << "the bst is already empty" << endl;
            break;
        }
        cout << "enter the element to search : ";
        cin >> ele;
        node = search(root,ele);
        if(node == NULL){
            cout << "the element is not present" << endl;
        }else{
            cout << "the element "<< node->data << " is present" << endl;
        }
        break;

        default:
        cout << "enter crt choice" << endl;
        break;
    }
    }
} 