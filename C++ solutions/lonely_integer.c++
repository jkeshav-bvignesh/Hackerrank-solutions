//https://www.hackerrank.com/challenges/lonely-integer/problem

//The solution to this problem can be achieved via bitwise XOR too

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    int i=0,j=1;
    
    do{
        if(a[i]==a[j]){
            i = j+1;
            j = i+1;
        }
        else{
            cout<<a[i];
            break;
        }
    }while(j<=n);
    return 0;
}
