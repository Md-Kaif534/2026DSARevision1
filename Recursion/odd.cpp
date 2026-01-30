#include <bits/stdc++.h>
using namespace std;

void odd(int n){
    if(n==1){
        cout<<1;
        return;
    }

    cout<<n<<" ";
    odd(n-2);
}

int main(){
    int n;
    cout<<"Enter the Numbers: ";
    cin>>n;

    odd(n);
    return 0;
}
