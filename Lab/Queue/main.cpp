#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    queue q;
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.Enqueue(6);
    q.dequeue();
    q.display();
    cout << q.topelement() << endl;
    return 0;
}
