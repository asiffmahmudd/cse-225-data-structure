#include <iostream>
#include "UnsortedType.h"
using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item){

    NodeType* location;
    location = new NodeType;
    location -> info = item;
    location -> next = listData;
    listData = location;
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item){
    NodeType* location = listData;
    NodeType* tempLocation;
    if(item == listData -> info){
        tempLocation = location;
        listData = listData -> next;
    }
    else{
        while(item != location -> next -> info && location -> next != NULL){
            location = location -> next;
        }
        tempLocation = location -> next;
        location -> next = location -> next -> next;
    }
    delete tempLocation;
    length--;
}

template <class ItemType>
void UnsortedType<ItemType>::DisplayMax(){
    NodeType* temp;
    ItemType maximum = listData -> info;
    for(temp = listData; temp != NULL; temp = temp -> next){
        cout << temp -> info << " ";
        if(maximum < temp -> info){
            maximum = temp -> info;
        }
    }
    cout << "" << endl;
    cout << maximum << endl;
}
