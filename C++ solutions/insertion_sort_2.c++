//https://www.hackerrank.com/challenges/insertionsort2

#include <iostream>
#include <vector>
using namespace std;

void print_Array(const vector<int> &arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n,temp;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int i = 1,j;
    while(i<n){
        j = i - 1;
        temp = arr[j+1];
        while(arr[j]>temp){
        arr[j+1] = arr[j];
        j = j-1;
    }
        arr[j+1] = temp;
        print_Array(arr);
        i = i+1;
    }
    return 0;
}

