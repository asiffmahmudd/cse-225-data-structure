#include <iostream>
using namespace std;

int r = 1;

int RaiseIntToPower(int n, int k){
    if(k == 1) return n;
    else{
        RaiseIntToPower(n,--k);
        r *= n;
        return r;
    }
}

int main()
{
    int n,k;
    cout << "Enter n:" << endl;
    cin >> n;
    cout << "Enter k:" << endl;
    cin >> k;
    int result = RaiseIntToPower(n,k);
    cout << result << endl;

    return 0;
}
