#include <iostream>
#include "queue.h"
using namespace std;

queue::queue()
{
    front = -1;
    rear = -1;
    maxsize = 10;
}

void queue::add(int x){
    if(0){
        cout << "Queue is full" << endl;
    }
    else if(front == -1){
        front = 0;
        rear = 0;
    }
    else{
        if(rear == maxsize - 1){
            rear = 0;
        }
        else{
            rear++;
        }
    }
    data[rear] = x;
}

void queue::remove(){
    if(front == -1){
        cout << "Queue is empty" << endl;
    }
    else if(front == rear){
        front = -1;
        rear = -1;
    }
    else{
        if(front == maxsize - 1){
            front = 0;
        }
        else{
            front++;
        }
    }
}

void queue::display(){
    int front_pos = front, rear_pos = rear;
    if (front == -1)
    {
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Queue elements :\n";
    if (front_pos <= rear_pos)
    {
        while (front_pos <= rear_pos)
        {
            cout<<data[front_pos]<<"  ";
            front_pos++;
        }
    }
    else
    {
        while (front_pos <= maxsize - 1)
        {
            cout<<data[front_pos]<<"  ";
            front_pos++;
        }
        front_pos = 0;
        while (front_pos <= rear_pos)
        {
            cout<<data[front_pos]<<"  ";
            front_pos++;
        }
    }
    cout<<endl;
}

