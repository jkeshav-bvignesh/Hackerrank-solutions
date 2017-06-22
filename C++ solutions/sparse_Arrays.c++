//https://www.hackerrank.com/challenges/sparse-arrays

#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    map<string,int> m;
    int n;
    string index;
    cin>>n;
    while(n-->0){
        cin>>index;
        m[index]+=1;
    }
    cin>>n;
    while(n-->0){
        cin>>index;
        cout<<m[index]<<endl;
    }
    return 0;
}

