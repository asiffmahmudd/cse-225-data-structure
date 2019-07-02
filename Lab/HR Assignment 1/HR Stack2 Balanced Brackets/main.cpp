#include <iostream>
#include <string>
using namespace std;

char a[100000000], b[100000000];
int i, j;

void push1(char x){
    i++;
    a[i] = x;
}

char pop1(){
    char c;
    c = a[i];
    i--;
    return c;
}

void push2(char x){
    j++;
    b[j] = x;
}

char pop2(){
    char c;
    c = b[j];
    j--;
    return c;
}

int main()
{
    int n;
    cin >> n;
    string s;
    char x, y;

    for(int l = 0; l < n; l++){
        cin >> s;
        i = -1;
        j = -1;
        int f = 0;
        for(int k = 0; k < s.length(); k++){
            push1(s[k]);
        }
        if(a[i] == '(' || a[i] == '[' || a[i] == '{'){
            f = 1;
        }
        else{
        while(i != -1){
            x = pop1();
            if(x == ')' || x == '}' || x == ']'){
                push2(x);
            }
            else{
                y = pop2();
                if((y == ')' && x == '(') || (y == '}' && x == '{') || (y == ']' && x == '[')){
                    continue;
                }
                else{
                    f = 1;
                    break;
                }
            }
        }}
        if(f == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
