//https://www.hackerrank.com/challenges/insertionsort1

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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp = arr[n-1];
    int j = n-2;
    while(arr[j]>temp){
        arr[j+1] = arr[j];
        j = j-1;
        print_Array(arr);
    }
    arr[j+1] = temp;
    print_Array(arr);
    return 0;
}

