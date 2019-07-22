#include <iostream>
#include "dynArr.h"
using namespace std;

int main()
{
    int r,c;
    cout << "Enter Number of rows of the array:" <<  endl;
    cin >> r;
    cout << "Enter Number of columns of the array:" <<  endl;
    cin >> c;
    int x;
    dynArr* d = new dynArr(r,c);
    for(int i = 0; i < r; i++){
        cout << "Enter " << c << " integers for row number " << i+1 << ":" << endl;
        for(int j = 0; j < r; j++){
            cin >> x;
            d->setValue(i,j,x);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < r; j++){
            x = d->getValue(i,j);
            cout << x << " ";
        }
        cout << "" << endl;
    }
    return 0;
}
