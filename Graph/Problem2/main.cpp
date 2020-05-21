#include <iostream>
#include "Graph.h"
using namespace std;

int main()
{
    Graph *g = new Graph();
    g->addEdge(0, 1);
    g->addEdge(0, 2);
    g->addEdge(1, 3);
    g->addEdge(1, 4);
    g->addEdge(1, 5);
    g->addEdge(1, 6);
    g->addEdge(2, 4);
    g->addEdge(2, 3);
    g->addEdge(3, 6);
    g->addEdge(5, 6);

    g->printGraph();
    cout<< endl;
    int *p = g->adjacentVertices(3);
    cout << "Adjacent vertices of 3: "<< endl;
    for(int i = 0; i < 5; i++){
        if(p[i] > VERTICES)
            break;
        if(p[i] >= 0)
            cout << p[i] << " ";
    }
    cout<<endl;
    cout<< "Common vertices between 1 and 2: " << endl;
    g->showCommonVertices(1,2);

    return 0;
}
