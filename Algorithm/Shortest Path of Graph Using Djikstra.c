#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define x 7

int minDistance(int d[], bool s[]){
    int min = INT_MAX, index;

    for (int i = 0; i < x; i++)
        if (s[i] == false && d[i] <= min)
            min = d[i], index = i;

    return index;
}

void printPath(int predec[], int i){

    if (predec[i] == - 1)
        return;

    printPath(predec, predec[i]);
    printf("%d ", i);
}

int printFinal(int d[], int n, int predec[]){

    int s = 0;
    printf("Vertex\t\t Distance\tPath");

    for (int i = 1; i < x; i++){
        printf("\n%d -> %d \t\t %d\t\t%d ",s, i, d[i], s);
        printPath(predec, i);
    }
}

void dijkstra(int v[x][x], int sr){
    int d[x];
    bool s[x];
    int predec[x];

    for (int i = 0; i < x; i++){
        predec[0] = -1;
        d[i] = INT_MAX;
        s[i] = false;
    }
    d[sr] = 0;

    for (int count = 0; count < x - 1; count++){
        int j = minDistance(d, s);
        s[j] = true;
        for (int i = 0; i < x; i++){
            if (!s[i] && v[j][i] && d[j] + v[j][i] < d[i]){
                predec[i] = j;
                d[i] = d[j] + v[j][i];
            }
        }
    }
    printFinal(d, x, predec);
}

int main(){

    int v[x][x];

    printf("Enter 0 if there's no connection between vertices. Enter the weight if there's a connection:\n");
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            printf("%d -> %d: \n", i,j);
            scanf("%d", &v[i][j]);
        }
    }

    dijkstra(v, 0);
    return 0;
}
