#include <iostream>
using namespace std;

int a[1000000], i = -1, b[1000000], j = -1, maximum = 0;

void push(int x){
    i++;
    a[i] = x;
    if(b[j] <= x){
        j++;
        maximum = x;
        b[j] = x;

    }
}

void pop(){
    if(a[i] == b[j]){
        maximum = b[j-1];
        j--;
    }
    i--;
}

void print(){
    if(i == -1){
        cout << "" << endl;
    }
    else{
        cout << b[j] << endl;
    }
}

int main(){
    b[0] = 0;
    long long int x, y, z, n;
    cin >> n;
    for(x = 0; x < n; x++){
        cin >> y;
        if(y == 1){
            cin >> z;
            push(z);
        }
        else if(y == 2){
            pop();
        }
        else if(y == 3){
            print();
        }
    }
    return 0;
}
