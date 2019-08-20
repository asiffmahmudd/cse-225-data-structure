#include <iostream>
#include <math.h>;
using namespace std;

int DecToBin(int dec){
    if(dec == 0) return dec%2;
    else{
        i++;
        return (dec%2)+10*DecToBin(dec/2);
    }
}

int main(){
    int n;
    cin >> n;
    n = DecToBin(n);
    cout << n << endl;
    return 0;
}
