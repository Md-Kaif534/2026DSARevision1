#include <bits/stdc++.h>
using namespace std;

int main(){
    string str="KOHLI";
    stack<char> s;

    for(char c:str){
        s.push(c);
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}