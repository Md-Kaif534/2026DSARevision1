#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1="Kaif Kohli";
    // reverse(s1.begin(), s1.end());
    // cout<<"The reversed string is: "<<s1;
    // return 0;

    int start=0, end=s1.size()-1;
    while(start<end){
        swap(s1[start], s1[end]);
        start++;
        end--;
    }
    cout<<"Reversed string is: "<<s1;
    return 0;
}
