#include <iostream>
using namespace std;

struct foot{
    string s;
    int length;
};

int main(){
    foot *f1, *f2, f3;
    bool table[5];
    int **a, *b, *c, d;

    f1 = new foot;
    f2 = &f3;
    f2 -> s = "hello";
    f2 = f1;

    for(int i = 0; i < 5; i++){
        table[i] = new bool;
        table[i] = (i < 2);
    }

    a = new int*[5];
    d = 5;
    b = &d;
    a[0] = b;
    a[1] = new int[3];
    c = new int;
    a[3] = c;

    return 0;
}
