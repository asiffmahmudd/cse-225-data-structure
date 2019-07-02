#include <iostream>
#include <string>
using namespace std;

int Mode(int array[], int size){
    int b[1000],max = 0,x;
    for(int i = 0 ; i < 1000; i++){
        b[i] = 0;
    }
    for(int i = 0; i < size; i++){
        b[array[i]]++;
        if(max < b[array[i]]){
            max = b[array[i]];
            x = array[i];
        }
    }
    return x;
}

int main(){
    int a[] = {1,2,3,4,5,2,2,3,6,7,3,8,3};
    int x = Mode(a,13);
    cout << x;
    return 0;
}
