#include <bits/stdc++.h>
using namespace std;

void fun0(int n);
void fun1(int n);
void fun2(int n);
void fun3(int n);

void fun3(int n){
    cout<<n<<" Days left for your Birthday."<<endl;
    fun2(n-1);
}
void fun2(int n){
    cout<<n<<" Days left for your Birthday."<<endl;
    fun1(n-1);
}
void fun1(int n){
    cout<<n<<" Days left for your Birthday."<<endl;
    fun0(n-1);
}
void fun0(int n){
    cout<<n<<"Finally Happy Birthday";
}

int main(){
    fun3(3);
    return 0;
}