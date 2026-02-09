#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {30, 27, 10, 16,21};
    int n=5;

    int fMax=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>fMax){
            fMax=arr[i];
        }
    }

    int secMax= -1;
    for(int i=0;i<n; i++){
        if(arr[i]!=fMax && arr[i]>secMax){
            secMax=arr[i];
        }
        
    }
    cout<<secMax;
    return 0;
}