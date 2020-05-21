#include <iostream>
#include <string>
#include <stack>
using namespace std;

int calculator(string postfix){
    stack<int> s;
    int length = postfix.length();
    int c, a, b;

    for(int i = 0; i < length; i++){
        if(postfix[i] == '/' || postfix[i] == '*' || postfix[i] == '+' || postfix[i] == '-'){
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            switch(postfix[i]){
                case '/': c = a/b;
                    break;
                case '*': c = a*b;
                    break;
                case '+': c = a+b;
                    break;
                case '-': c = a-b;
                    break;
            }
            s.push(c);
        }
        else{
            a = postfix[i] - '0';
            s.push(a);
        }
    }

    return s.top();
}

int main()
{
    string postfix;
    getline(cin,postfix);
    int value = calculator(postfix);
    cout << value << endl;
    return 0;
}
