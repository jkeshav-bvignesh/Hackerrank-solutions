//https://www.hackerrank.com/challenges/diagonal-difference

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int sum_p=0;
    int sum_d=0;
    for (int a_i = 0;a_i < n;a_i++){
        sum_p+=a[a_i][a_i];
        sum_d+=a[a_i][n-1-a_i];
    }
    
    cout<<abs(sum_p-sum_d);
    return 0;
}

