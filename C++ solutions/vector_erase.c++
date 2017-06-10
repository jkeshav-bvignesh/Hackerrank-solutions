//https://www.hackerrank.com/challenges/vector-erase

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int query_1;
    int query2_1,query2_2;
    
    cin>>query_1;
    cin>>query2_1>>query2_2;
    
    v.erase(v.begin()+query_1-1);
    v.erase(v.begin()+query2_1-1,v.begin()+query2_2-1);
    n = v.size();
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<< " ";
    }
    return 0;
}

