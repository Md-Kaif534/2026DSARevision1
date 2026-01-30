#include <bits/stdc++.h>
using namespace std;

void fun3(int n){
    if(n==0){
        cout<<"Happy Birthday.";
        return;
    } else{
        cout<<n<<" Days left for your Birthday.\n";
        fun3(n-1);
    }
}

int main(){
    fun3(3);
    return 0;
}