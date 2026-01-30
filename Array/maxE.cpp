#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxi = arr[0];
    for(int i=0;i<n; i++){
        if(arr[i]>maxi)
        maxi=arr[i];
    }
    cout<<maxi<<" is the maximum elements in the array.";
    return 0;
}