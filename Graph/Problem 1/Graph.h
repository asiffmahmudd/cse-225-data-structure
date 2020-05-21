#ifndef GRAPH_H
#define GRAPH_H

const int VERTICES = 5;

class Graph
{
    public:
        Graph();
        void addEdge(int vertex1, int vertex2);
        void printGraph();
        int * nonAdjacentVertices(int vertex);
        void addUnknownVertices(int vertex);
        void searchVertex(int arr[], int length);

    private:
        int **graph;

};

#endif // GRAPH_H
