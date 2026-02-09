#include <bits/stdc++.h>
using namespace std;

bool isValid(string str){
    stack<char> s;
    for(char c:str){
        if(c=='(')
        s.push(c);

        else if(c==')'){
            if(s.empty()) return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string str = "((()()))";
    cout<<isValid(str);
    return 0;
}