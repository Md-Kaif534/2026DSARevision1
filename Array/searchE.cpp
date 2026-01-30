#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cout<<"Enter the size of the array & target the elements: "<<endl;
    cin>>n>>target;

    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool found = false;
    for(int i=0;i<n; i++){
        if(arr[i]==target){
            found=true;
            break;
        }
        cout<<found;
    }
    if(found){
        cout<<"YES\n";
    } else {
        cout<<"NO";
    }
    return 0;
}