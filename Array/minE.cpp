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

    int min = arr[0];
    for(int i=0;i<n; i++){
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<min<<" is the minimum elements in the array.";
    return 0;
}