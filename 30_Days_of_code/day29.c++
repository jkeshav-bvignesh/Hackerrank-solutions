#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Brute Force Solution to the Bitwise AND problem
int main() {
    int n;
    cin >> n;
    int N,k,max, temp;
    while(n-->0){
        max = 0;
        cin>>N>>k;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++){
                temp = i&j;
                if(temp>max && temp<k){
                    max = temp;
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
