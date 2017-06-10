https://www.hackerrank.com/challenges/permutation-equation
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,temp;
    cin>>n;
    vector <int> p(n);
    vector <int>::iterator it;
    for(int i = 0;i<n;i++){
        cin>>p[i];
    }
    for(int i = 1;i<=n;i++){
        it = find(p.begin(),p.end(),i);
        temp = it - p.begin() + 1;
        it = find(p.begin(),p.end(),temp);
        cout<<it-p.begin() + 1<<endl;
    }
    return 0;
}

