//https://www.hackerrank.com/challenges/cpp-lower-bound

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    vector <int>::iterator low;
    cin>>n;
    vector <int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int q,temp;
    cin>>q;
    while(q--){
        cin>>temp;
        low = lower_bound(num.begin(),num.end(),temp);
        n = low - num.begin();
        if(num[n]==temp){
            cout<<"Yes "<<n+1<<endl;
        }
        else{
            cout<<"No "<<n+1<<endl;
        }
    }
    return 0;
}

