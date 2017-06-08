//https://www.hackerraank.com/challenges/big-sorting
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool sort_function(string a, string b)
    {
    int n=a.length();
    int m=b.length();
    if(n==m)
        return (a<b);
    
    return n<m;  
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector <string> arr(n);
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),sort_function);
    for(int i=0;i<n;i++)
        {
        cout<<arr[i]<<endl;
    }
    return 0;
}

