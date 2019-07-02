#include <iostream>
#include "stacktype.h"
using namespace std;

int main()
{
    stacktype<int> s[5];

    if(s.IsEmpty()) cout << "The stack is empty" << endl;
    else cout << "The stack is full" << endl;

    s.Push(5);
    s.Push(7);
    s.Push(4);
    s.Push(2);

    bool d = s.IsEmpty();
    if(d == true) cout << "The stack is empty" << endl;
    else cout << "The stack is full" << endl;
    bool c = s.IsFull();
    if(d == true) cout << "The stack is full" << endl;
    else cout << "The stack is not full" << endl;

    s.display();
    s.Push(3);
    s.display();

    bool e = s.IsFull();
    if(e == true) cout << "The stack is full" << endl;
    else cout << "The stack is not full" << endl;

    s.Pop();
    s.Pop();
    cout << s.Top() << endl;

    return 0;
}
