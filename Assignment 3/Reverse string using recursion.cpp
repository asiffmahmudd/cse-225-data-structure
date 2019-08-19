#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string result = "";
string ReverseString(string s){
    if(s.length() == 1){
        result += s;
        return s;
    }
    else{
        result += s.substr(s.length()-1,1);
        s = s.substr(0,s.length()-1);
        ReverseString(s);
        return result;
    }
}

int main(){
    string s;
    cin >> s;
    s = ReverseString(s);
    cout << s;
    return 0;
}
