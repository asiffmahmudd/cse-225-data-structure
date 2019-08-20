#include <iostream>
using namespace std;

int r = INT_MAX;

int findMin(int a[], int size){
    if(size == 0) return a[0];
    else{
        findMin(a, --size);
        if(r > a[size]) r = a[size];
        return r;
    }
}

int main(){
    int size;
    cin >> size;
    int a[size];
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    size = findMin(a, size);
    cout << size << endl;
    return 0;
}
