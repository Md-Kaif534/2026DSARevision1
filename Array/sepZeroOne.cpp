#include <bits/stdc++.h>
using namespace std;

void sepZeroOne(vector<int>& arr){
    int start=0, end=arr.size()-1;

    while(start<end){
        if(arr[start]==0){
            start++;
        }
        
        else if(arr[end]==1){
            end--;
        }
        
        else{
            swap(arr[start], arr[end]);
        start++;
        end--;
        }
        
    }
}

int main(){
    vector<int> arr={1,0,1,1,0,1,0,1,1,0};
    sepZeroOne(arr);

    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}