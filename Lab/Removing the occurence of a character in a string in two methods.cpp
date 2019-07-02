#include <iostream>
#include <string>
using namespace std;

string RemoveAllOccurence1(string text, char ch){
    char a[text.length()];
    int j = 0,i;
    for(i = 0; i < text.length(); i++){
        if(text[i] == ch) continue;
        else{
            a[j] = text[i];
            j++;
        }
    }
    a[j] = '\0';
    string n = a;
    return n;
}

string RemoveAllOccurence2(string text, char ch){
    string s = "";
    int i, j = 0;
    while(1){
        i = text.find(ch);
        if(i >= 0 && i < text.length()){
            s += text.substr(j, i);
            text = text.substr(i+1);
        }
        else{
            s += text.substr(j, i);
            break;
        }
    }
    return s;
}

int main(){
    string s;
    char ch;
    cout << "Enter your string:" << endl;
    getline(cin,s);
    cout << "Enter the character you want to remove:" << endl;
    cin >> ch;
    string k = RemoveAllOccurence1(s,ch);
    cout << k << endl;
    string l = RemoveAllOccurence2(s,ch);
    cout << l << endl;

    return 0;
}
