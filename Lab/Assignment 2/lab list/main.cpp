#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;

int main()
{
    UnsortedType<int> u1;
    UnsortedType<int> u2;
    int m, n, t;
    cout << "Enter m:" << endl;
    cin >> m;
    cout << "Enter values:" << endl;
    for(int i = 1; i <= m; i++){
        cin >> t;
        u1.InsertItem(t);
    }
    cout << "Enter n:" << endl;
    cin >> n;
    cout << "Enter values:" << endl;
    for(int i = 1; i <= n; i++){
        cin >> t;
        u2.InsertItem(t);
    }

    t = u1.LengthIs() + u2.LengthIs();
    int a[t], k;

 //   u1.GetNextItem(k);
 //   cout << k << endl;
 //   u1.display();

    for(int i = 0; i < u1.LengthIs(); i++){
        u1.GetNextItem(k);
        a[i] = k;
    }
    for(int i = u1.LengthIs(); i < u2.LengthIs(); i++){
        u2.GetNextItem(k);
        a[i] = k;
    }

//    for(int i = 0; i < t; i++){
  //      cout << a[i] << endl;
    //}

    int min;
    for(int i = 0; i < t-1; i++){
        for(int j = 1; j < t; j++){
            if(a[i] > a[j]){
                min = a[j];
                a[j] = a[i];
                a[i] = min;
            }
        }
    }
    for(int i = 0; i < t; i++){
        u1.InsertItem(a[i]);
    }
    u1.ResetList();
    for(int i = 0; i < t; i++){
        u1.GetNextItem(k);
        cout << k << " ";
    }
    cout << "" << endl;

    return 0;
}
