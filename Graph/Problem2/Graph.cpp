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
    graph[vertex2][vertex1] = 1;
}

void Graph::printGraph(){
    for(int i=0;i<VERTICES;i++){
        for(int j=0;j<VERTICES;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int * Graph::adjacentVertices(int vertex){
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
            if(graph[vertex][i] == 1){
                arr[j++] = i;
            }
        }
        return arr;
    }
}

void Graph::showCommonVertices(int vertex1, int vertex2){
    int count = 0;
    for(int i = 0; i < VERTICES; i++){
        if(graph[vertex1][i] == 1 && graph[vertex2][i] == 1){
            cout << i << " ";
            count++;
        }
    }
    if(count == 0)
        cout << "No common vertices exist";
    cout <<endl;
}
