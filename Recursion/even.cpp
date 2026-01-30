#include <bits/stdc++.h>
using namespace std;

void even(int n){
    if(n==2){
        cout<<"2";
        return;
    }

    cout<<n<<" ";
    even(n-2);
}

int main(){
    int n;
    cout<<"Enter the Numbers: ";
    cin>>n;

    even(n);
    return 0;
}
