#ifndef GRAPH_H
#define GRAPH_H

const int VERTICES = 7;

class Graph
{
    public:
        Graph();
        void addEdge(int vertex1, int vertex2);
        void printGraph();
        int* adjacentVertices(int vertex);
        void showCommonVertices(int vertex1, int vertex2);

    private:
        int **graph;

};

#endif // GRAPH_H
