#include <iostream>
#include <math.h>
using namespace std;

double series(double n){
    if(n == 0) return 1;
    else{
        return (1/pow(2,n))+series(n-1);
    }
}

int main(){
    int n;
    cin >> n;
    double result = series(n);
    cout << result << endl;
    return 0;
}
