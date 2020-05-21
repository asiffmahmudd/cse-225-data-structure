#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
using namespace std;

int main()
{
    TreeType<int> t;
    if(t.IsEmpty()) cout << "Tree is empty" << endl;
    else cout << "Tree is not empty" << endl;

    t.InsertItem(4);
    t.InsertItem(9);
    t.InsertItem(2);
    t.InsertItem(7);
    t.InsertItem(3);
    t.InsertItem(11);
    t.InsertItem(17);
    t.InsertItem(0);
    t.InsertItem(5);
    t.InsertItem(1);

    if(t.IsEmpty()) cout << "Tree is empty" << endl;
    else cout << "Tree is not empty" << endl;

    cout << t.LengthIs() << endl;

    int x = 9;
    bool b;
    t.RetrieveItem(x,b);
    if(b) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    x = 13;
    t.RetrieveItem(x,b);
    if(b) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    t.ResetTree(IN_ORDER);
    for(int i = 0 ; i < t.LengthIs(); i++){
        t.GetNextItem(x,IN_ORDER, b);
        cout << x << " ";
    }
    cout << "" << endl;

    t.ResetTree(PRE_ORDER);
    for(int i = 0 ; i < t.LengthIs(); i++){
        t.GetNextItem(x,PRE_ORDER, b);
        cout << x << " ";
    }
    cout << "" << endl;

    t.ResetTree(POST_ORDER);
    for(int i = 0 ; i < t.LengthIs(); i++){
        t.GetNextItem(x,POST_ORDER, b);
        cout << x << " ";
    }
    cout << "" << endl;

    t.MakeEmpty();


    return 0;
}
