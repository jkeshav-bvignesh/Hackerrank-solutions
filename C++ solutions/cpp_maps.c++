//https://www.hackerrank.com/challenges/cpp-maps
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map <string,int> m;
    map<string,int>::iterator itr;
    int q;
    cin >> q;
    string name;
    int mark, type;
    while(q--){
        cin>>type;
        if(type==1){
            cin>>name>>mark;
            itr = m.find(name);
            if(itr==m.end()){
                m.insert(make_pair(name,mark));
            }
            else{
                m[name] = m[name]+mark;
            }   
        }
        else if(type==2){
            cin>>name;
            m.erase(name);
        }
        
        else if(type==3){
            cin>>name;
            itr = m.find(name);
            if(itr==m.end()){
                cout<<"0"<<endl;
            }
            else{
                cout<<m[name]<<endl;
            }
        }
    }
    return 0;
}

