#include <iostream>
#include "Graph.h"
using namespace std;

int main()
{
    Graph *g = new Graph();
    g->addEdge(0, 1);
    g->addEdge(0, 4);
    g->addEdge(1, 2);
    g->addEdge(2, 3);
    g->addEdge(3, 4);

    g->printGraph();
    cout<<endl;
    int *p = g->nonAdjacentVertices(0);
    cout << "Non-adjacent vertices of 0: " << endl;
    for(int i = 0; i < 5; i++){
        if(p[i] >= 0)
        cout << p[i] << " ";
    }
    cout<<endl;
    cout<<endl;

    int arr[] = {0,4,3};
    g->searchVertex(arr, 3);
    cout << endl;

    int arr2[] = {0,1,2,3};
    g->searchVertex(arr2, 4);
    cout << endl;

    g->addUnknownVertices(4);
    cout << "After calling the function addUnknownVertices for vertex 4:" << endl;
    g->printGraph();


    return 0;
}
