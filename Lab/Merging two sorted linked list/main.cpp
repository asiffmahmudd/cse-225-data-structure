#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;

template <class ItemType>
void print(UnsortedType<ItemType>& u){
    int n = u.LengthIs();
    int x;
    for(int i = 0; i < n; i++){
        u.GetNextItem(x);
        cout << x << " ";
    }
    cout << "" << endl;
}

template <class ItemType>
void input(UnsortedType<ItemType>& u){
    int n,x;
    cout << "Enter list length:" << endl;
    cin >> n;
    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++){
        cin >> x;
        u.InsertItem(x);
    }
}

template <class ItemType>
UnsortedType<ItemType> mergeList(UnsortedType<ItemType>& u1, UnsortedType<ItemType>& u2){
    int m,n,length,c1 = 1, c2 = 1,a,b,f;
    m = u1.LengthIs();
    n = u2.LengthIs();
    length = m+n;
    UnsortedType<int> u;
    u1.GetNextItem(a);
    u2.GetNextItem(b);
    for(int i = 0; i < length; i++){
        if(a > b){
            u.InsertItem(a);
            f = 0;
            if(c1 == m) a = INT_MIN;
        }
        else{
            u.InsertItem(b);
            f = 1;
            if(c2 == n) b = INT_MIN;
        }
        if(c1 < m && f == 0){
            u1.GetNextItem(a);
            c1++;
        }
        else if(c2 < n && f == 1){
            u2.GetNextItem(b);
            c2++;
        }
    }
    return u;
}

int main()
{
    UnsortedType<int> u1,u2,u3;
    input(u1);
    input(u2);
    u3 = mergeList(u1,u2);
    print(u3);
    return 0;
}
