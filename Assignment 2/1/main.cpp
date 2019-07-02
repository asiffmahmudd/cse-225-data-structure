#include <iostream>
using namespace std;

int top = -1;
int a[10];

void push(int x){
    top++;
    a[top] = x;
}

void pop(){
    top--;
}

void display(){
    if(top == -1){
        cout << "Stack is empty" << endl;
    }
    else{
        for(int i = 0; i <= top; i++){
            cout << a[i] << " ";
        }
        cout << "" << endl;
    }
}

void rev(){
    int b[10];
    int c = 0;
    while(top != -1){
        b[c] = a[top];
        pop();
        c++;
    }
    for(int i = 0; i < c; i++){
        push(b[i]);
    }

}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    rev();
    display();
    return 0;
}
