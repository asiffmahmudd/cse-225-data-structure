#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string result = "";
string IsPalindrome(string s){
    if(s.length() == 1){
        result += s;
        return s;
    }
    else{
        result += s.substr(s.length()-1,1);
        s = s.substr(0,s.length()-1);
        IsPalindrome(s);
        return result;
    }
}

void palindrome(string s)
{
    string s1 = IsPalindrome(s);
    if(s == s1) cout << "Palindrome" << endl;
    else cout << "Not palindrome" << endl;
}
int main(){
    string s;
    cin >> s;
    palindrome(s);

    return 0;
}
