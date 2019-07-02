#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout << "Enter the number of rows:" << endl;
    cin >> r;
    int **arr = new int* [r];
    for(int i = 0; i < r; i++){
        cout << "Enter the number of elements in row number " << i+1 << endl;
        cin >> c;
        arr[i] = new int[c];
        cout << "Enter " << c << " integers:" << endl;
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        delete[] arr[i];
    }
    delete [] arr;
    return 0;
}
