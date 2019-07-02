#include <iostream>
#include "queue.h"
using namespace std;

queue::queue()
{
    front = 0;
    rear = 0;
}

void queue::Enqueue(int x){
    a[rear] = x;
    rear++;
}

void queue::dequeue(){
    front++;
}

int queue::topelement(){
    return a[front];
}

void queue::display(){
    for(int j = front; j < rear; j++){
        cout << a[j] << endl;
    }
}
