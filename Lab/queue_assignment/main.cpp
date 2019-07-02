#include <iostream>
#include "queue.h"
using namespace std;



int main()
{
    queue o;
    o.add(1);
    o.display();
    o.remove();
    o.display();
    o.add(2);
    o.add(3);
    o.display();
    o.add(4);
    o.add(5);
    o.add(6);
    o.add(7);
    o.add(8);
    o.add(9);
    o.add(10);
    o.display();
    o.remove();
    o.remove();
    o.remove();
    o.display();
    o.remove();
    o.remove();
    o.remove();
    o.remove();
    o.add(11);
    o.add(12);
    o.display();
    o.add(13);
    o.add(14);
    o.display();

    return 0;
}
