//https://www.hackerrank.com/challenges/quicksort1

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> left,right;
    int pivot;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    pivot = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]<pivot){
            left.push_back(arr[i]);
        }
        else if(arr[i]>pivot){
            right.push_back(arr[i]);
        }
    }
    
    left.push_back(pivot);
    left.insert(left.end(),right.begin(),right.end());
    for(int i = 0;i<n;i++){
        cout<<left[i]<<" ";
    }
    
    return 0;
}

