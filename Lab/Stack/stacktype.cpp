#include <iostream>
#include "stacktype.h"
using namespace std;

template <class Itemtype>
stacktype<ItemType>::stacktype()
{
    top = -1;
}

template <class Itemtype>
bool stacktype<ItemType>::IsEmpty(){
    return (top == -1);
}

template <class Itemtype>
bool stacktype<ItemType>::IsFull(){
    return (top == Max_Items-1);
}

template <class ItemType>
void stacktype<Itemtype>::Push(ItemType newItem){
    if(IsFull()){
        cout << "The stack is full" << endl;
    }
    top++;
    items[top] = newItem;
}

template <class ItemType>
void stacktype<Itemtype>::Pop(){
    if(IsEmpty()){
        cout << "The stack is empty" << endl;
    }
    top--;
}

template <class ItemType>
ItemType stacktype<ItemType>::Top(){
    if(isEmpty()) cout << "The stack is empty" << endl;
    return items[top];
}

template <class ItemType>
void stacktype<ItemType>::display(){
    for(int i = 0; i < top; i++){
        cout << items[i] << " ";
    }
    cout << "" << endl;
}
