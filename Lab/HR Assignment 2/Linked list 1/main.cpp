#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* Head = NULL;

Node* addLast(Node* head, int x){

    Node* newnode = new Node;
    newnode -> data = x;
    newnode -> next = NULL;

    if(head == NULL){
        head = newnode;
    }
    else{
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newnode;
    }
    return head;
}

Node* addFirst(Node* head, int x){

    Node* newnode = new Node;
    newnode -> data = x;
    newnode -> next = NULL;

    if(head == NULL){
        head = newnode;
    }
    else{
        Node* temp = head;
        head = newnode;
        head -> next = temp;
    }
    return head;
}

Node* Insert(Node* head, int x, int position){

    Node* newnode = new Node;
    newnode -> data = x;
    newnode -> next = NULL;

    if(head == NULL){
        head = newnode;
    }
    else{
        Node* temp = head;
        if(position == 0){
            head = newnode;
            head -> next = temp;
        }
        else{
            while(position - 1 > 0){
                temp = temp -> next;
                position--;
            }
            newnode -> next = temp -> next;
            temp -> next = newnode;
        }
    }
    return head;
}

Node* Delete(Node* head, int position){

    Node* temp = head;
    if(position == 0){
        head = head -> next;
    }
    else{
        while(position - 1 > 0){
            temp = temp -> next;
            position--;
        }
        temp -> next = temp -> next -> next;
    }

    return head;
}

void display(Node* head){
    if(head == NULL){
        cout << "";
    }
    else{
        while(head != NULL){
            cout << head -> data << endl;
            head = head -> next;
        }
    }
    cout << "" << endl;
}

int main()
{
    Node* temp;
    temp = new Node;
    temp = Insert(Head, 3, 0);
    temp = Insert(temp, 4, 0);
    temp = Insert(temp, 5, 1);
    temp = Insert(temp, 6, 0);
    temp = Insert(temp, 7, 0);
    display(temp);
    temp = Delete(temp, 0);
    display(temp);
    temp = Delete(temp, 1);
    display(temp);
    temp = Delete(temp, 3);
    display(temp);
    return 0;
}
