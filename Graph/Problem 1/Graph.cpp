#include <iostream>
#include "Graph.h"
using namespace std;

Graph::Graph(){
    graph = new int*[VERTICES];
    for(int i = 0; i < VERTICES; i++){
        graph[i] = new int[VERTICES];
    }
    for(int i = 0; i < VERTICES; i++){
        for(int j = 0; j < VERTICES; j++){
            graph[i][j] = 0;
        }
    }
}

void Graph::addEdge(int vertex1, int vertex2){
    graph[vertex1][vertex2] = 1;
}

void Graph::printGraph(){
    for(int i=0;i<VERTICES;i++){
        for(int j=0;j<VERTICES;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int * Graph::nonAdjacentVertices(int vertex){
    if(vertex >= VERTICES)
        cout << "Vertex doesn't exist" << endl;
    else{
        static int arr[VERTICES];
        for(int i = 0; i < VERTICES; i++){
            arr[i] = -1;
        }
        int j = 0;
        for(int i = 0; i < VERTICES; i++){
            if(i == vertex)
                continue;
            if(graph[vertex][i] == 0){
                arr[j++] = i;
            }
        }
        return arr;
    }
}

void Graph::addUnknownVertices(int vertex){
    if(vertex >= VERTICES)
        cout << "Vertex doesn't exist" << endl;
    else{
        for(int i = 0; i < VERTICES; i++){
            if(i == vertex)
                continue;
            if(graph[vertex][i] == 0){
                graph[vertex][i] = 1;
            }
        }
    }
}

void Graph::searchVertex(int arr[], int length){
    int f = 0;
    for(int i = 0; i < length-1; i++){
        if(graph[arr[i]][arr[i+1]] != 1){
            f = 1;
            break;
        }
    }
    if(f == 1)
        cout << "Vertex cannot be reached" << endl;
    else
        cout << "Vertex can be reached" << endl;
}

