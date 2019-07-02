#include <iostream>
#include "queue.h"
using namespace std;

queue::queue()
{
    front = -1;
    rear = -1;
}

void queue::add(int x){
    if((rear > front) && (rear-front == 9) || (rear < front) && (front == rear+1)){
        cout << "Queue is full" << endl;
        return;
    }
    else if(front == -1){
        front = 0;
        rear = 0;
    }
    else if(rear == 9){
        rear = 0;
    }
    else{
        rear++;
    }
    data[rear] = x;
}

void queue::remove(){
    if(front == -1){
        cout << "Queue is empty" << endl;
        return;
    }
    else if(front == rear){
        front = -1;
        rear = -1;
    }
    else if(front == 9){
        front = 0;
    }
    else{
        front++;
    }
}

void queue::display(){
    if(front == -1){
        cout << "QUEUE IS EMPTY" << endl;
        return;
    }
    else if(front <= rear){
        for(int i = front; i <= rear; i++){
            cout << data[i] << " ";
        }
        cout << "" << endl;
    }
    else{
        for(int i = front; i <= 9; i++){
            cout << data[i] << " ";
        }
        for(int i = 0; i <= rear; i++){
            cout << data[i] << " ";
        }
        cout << "" << endl;
    }
}
