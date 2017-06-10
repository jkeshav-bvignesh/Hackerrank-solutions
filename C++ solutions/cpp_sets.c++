//https://www.hackerrank.com/challenges/cpp-sets

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    set <int> s;
    set<int>::iterator itr;
    cin>>q;
    int x,y;
    while(q--){
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            itr=s.find(x);
            if(itr!=s.end()){
                s.erase(x);
            }
        }
        else if(y==3){
            itr = s.find(x);
            if(itr!=s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}

