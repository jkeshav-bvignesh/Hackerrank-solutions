//https://www.hackerrank.com/challenges/crush/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,m,a,b,k;
    long long int max = 0,temp = 0;
    cin>>n>>m;
    vector<long long int> arr(n+1);
    fill(arr.begin(),arr.end(),0);
    for(int j=0;j<m;j++){
        cin>>a>>b>>k;
        arr[a-1] += k;
        arr[b] -= k;
    }
    for(int i=0;i<n+1;i++){
        temp+=arr[i];
        if(temp>max){max=temp;}
    }
    cout<<max;
    return 0;
}


