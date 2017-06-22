//https://www.hackerrank.com/challenges/dynamic-array

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,type,x,y,last = 0,temp,q;
    cin>>n>>q;
    vector<vector<int>> seq(n);
    
    while(q-->0){
        cin>>type>>x>>y;
        if(type == 1){
            temp = ((x^last)%n);
            seq[temp].push_back(y);
        }
        else if(type == 2){
            temp = ((x^last)%n);
            int size = seq[temp].size();
            last = seq[temp][y%size];
            cout<<last<<endl;
        }
    }
    return 0;
}

