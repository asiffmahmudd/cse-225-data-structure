#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    UnsortedType<int> u;
    u.InsertItem(9);
    u.InsertItem(6);
    u.InsertItem(7);
    u.InsertItem(3);
    u.InsertItem(8);
    u.InsertItem(2);

    u.DeleteItem(3);
    u.DisplayMax();
    u.DeleteItem(9);
    u.DisplayMax();
    u.DeleteItem(2);
    u.DisplayMax();
    u.DeleteItem(6);
    u.DisplayMax();
    u.DeleteItem(8);
    u.DisplayMax();
    u.DeleteItem(7);



    return 0;
}
