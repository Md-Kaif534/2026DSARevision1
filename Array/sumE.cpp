#include <iostream>
using namespace std;

int main(){
    int arr[5]={7, 3, 1, 5, 6};
    int n=5;

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"The sum is: "<<sum;
    return 0;
}
