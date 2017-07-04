//https://www.hackerrank.com/challenges/lonely-integer/problem

//The solution using bitwise XOR

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int lonely = 0,temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        lonely = lonely^temp;
    }
    cout<<lonely;
    
    return 0;
}
