#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
#include <string.h>
using namespace std;

template<class ItemType>
void isEmpty(StackType<ItemType> s){
    if(s.IsEmpty()) cout << "Stack is Empty" << endl;
    else cout << "Stack is not Empty" << endl;
}


template<class ItemType>
void isFull(StackType<ItemType> s){
    if(s.IsFull()) cout << "Stack is Full" << endl;
    else cout << "Stack is not Full" << endl;
}

template<class ItemType>
void print(StackType<ItemType> s){
    int a[MAX_ITEMS];
    int i = 0;
    while(!s.IsEmpty()){
        a[i] = s.Top();
        s.Pop();
        i++;
    }
    for(int j = i-1; j >= 0; j--){
        cout << a[j] << " ";
        s.Push(a[j]);
    }
    cout << "" << endl;
}

void isBalanced(string b){
    StackType<char> s;
    int l = b.length();
    for(int i = 0 ; i < l; i++){
        if(b[i] == '('){
            s.Push(b[i]);
        }
        else{
            if(s.IsEmpty() == true || s.Top() != '('){
                cout << "Not balanced" << endl;
                return;
            }
            s.Pop();
        }
    }
    if(s.IsEmpty()) cout << "Balanced" << endl;
    else cout << "Not balanced" << endl;
}

int main()
{
    StackType<int> s;
    isEmpty(s);
    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);

    isEmpty(s);
    isFull(s);
    print(s);

    s.Push(3);
    print(s);
    isFull(s);
    s.Pop();
    s.Pop();
    cout << s.Top() << endl;

    cout << "Enter the string of brackets: " << endl;
    string b;
    cin >> b;
    isBalanced(b);

    return 0;
}
