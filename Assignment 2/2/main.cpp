#include <iostream>
using namespace std;

struct node{
    int value;
    node* right;
    node* left;
};

node* root = NULL;

void add(int x){

    node* newnode = new node;
    newnode -> value = x;
    newnode -> right = NULL;
    newnode -> left = NULL;

    if(root == NULL){
        root = newnode;
    }
    else{
        node* temp = root;
        while(true){
            if(newnode -> value < temp -> value){
                if(temp -> left == NULL){
                    temp -> left = newnode;
                    break;
                }
                else{
                    temp = temp -> left;
                }
            }
            else{
                if(temp -> right == NULL){
                    temp -> right = newnode;
                    break;
                }
                else{
                    temp = temp -> right;
                }
            }
        }
    }
}

void print(node* temp){
    if(temp != NULL){
        print(temp -> left);
        cout << temp -> value << " ";
        print(temp -> right);
    }

}

int s = 0;

void sum(node* temp){
    if(temp != NULL){
        sum(temp -> left);
        s = s + temp -> value;
        sum(temp -> right);
    }
}

int main(){

    add(5);
    add(4);
    add(3);
    add(2);
    add(7);
    add(1);
    add(9);
    add(6);
    add(8);
    add(6);
    print(root);
    sum(root);
    cout << s << endl;
    return 0;
}
