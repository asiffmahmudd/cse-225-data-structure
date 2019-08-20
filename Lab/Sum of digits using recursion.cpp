#include <iostream>
using namespace std;

int sumOfDigits(int x){
    if(x/10 == 0) return x;
    else return x%10+sumOfDigits(x/10);
}


int main(){
    int n;
    cin >> n;
    n = sumOfDigits(n);
    cout << n << endl;
    return 0;
}
