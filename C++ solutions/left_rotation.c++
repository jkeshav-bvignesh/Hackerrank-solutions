//https://www.hackerrank.com/challenges/array-left-rotation/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin>>n>>d;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[(i+(n-d))%n];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

