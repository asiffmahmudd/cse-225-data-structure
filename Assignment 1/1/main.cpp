#include <iostream>
using namespace std;

struct node{
    int value;
    node* next;
};

node* head = NULL;

void add(int x){
    node* newNode = new node;
    newNode -> value = x;
    newNode -> next = NULL;

    if(head == NULL){
        head = newNode;
        head -> next == NULL;
    }
    else{
        node* temp;
        temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}

void display(){
    node* temp;
    temp = head;
    while(temp != NULL){
        cout << temp -> value << " ";
        temp = temp -> next;
    }
    cout << "" << endl;
}

void consec(){
    node* temp = head;
    while(temp -> next != NULL){
        if(temp -> value == temp -> next -> value){
            temp -> next = temp -> next -> next;
        }
        else{
            temp = temp -> next;
        }
    }
}

int main()
{
    add(1);
    add(1);
    add(2);
    add(2);
    add(3);
    add(3);
    add(4);
    add(4);
    add(5);
    add(5);
    consec();
    display();

    return 0;
}
