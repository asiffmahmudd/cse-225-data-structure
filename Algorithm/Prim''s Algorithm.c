#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define x 8

int minKey(int key[], bool mst[]){
    int min = INT_MAX, index;

    for (int v = 0; v < x; v++){
        if (mst[v] == false && key[v] < min)
            min = key[v], index = v;
    }
    return index;
}

int printMST(int parent[], int graph[x][x]){
    printf("Edge \tCost\n");
    int totalCost = 0;
    for (int i = 1; i < x; i++){
        printf("%d - %d \t%d \n", parent[i]+1, i+1, graph[i][parent[i]]);
        totalCost += graph[i][parent[i]];
    }
    printf("Total cost: %d\n", totalCost);
}

void primMST(int graph[x][x]){
    int parent[x];
    int key[x];
    bool mst[x];

    for (int i = 0; i < x; i++)
        key[i] = INT_MAX, mst[i] = false;

    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < x - 1; count++){
        int u = minKey(key, mst);
        mst[u] = true;
        for (int v = 0; v < x; v++){
            if(graph[u][v] && mst[v] == false && graph[u][v] < key[v]){
                parent[v] = u, key[v] = graph[u][v];
            }
        }
    }
    printMST(parent, graph);
}

int main(){

    int graph[x][x];
    printf("Enter 0 if there's no connection between vertices. Enter the weight if there's a connection:\n");
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            printf("%d - %d: \n", i+1,j+1);
            scanf("%d", &graph[i][j]);
        }
    }
    primMST(graph);

    return 0;
}
