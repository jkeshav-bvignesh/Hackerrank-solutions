//https://www.hackerrank.com/challenges/maximizing-xor/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l,r,max = 0, temp;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=i;j<=r;j++){
            temp = i^j;
            if(temp>max){
                max = temp;
            }
        }
    }
    cout<<max;
    return 0;
}
