#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT  */
    int arr_i, arr_j,k,l;
    cin>>arr_i>>arr_j;
    vector <vector <int> > o_array;
    
    for(int i=0;i<arr_i;++i)
        {
        cin>>k;
	vector<int> t_array;
        for(int j=0;j<k;++j)
            {
            cin>>l;
            t_array.push_back(l);
        }
        o_array.push_back(t_array);
    }
    int q,t;
    for(int i=0;i<arr_j;++i)
        {
        cin>>q>>t;
        cout<<o_array[q][t]<<endl;
    }
    return 0;
}

