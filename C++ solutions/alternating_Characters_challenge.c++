//https://www.hackerrank.com/challenges/alternating-characters

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,count = 0;
    cin>>n;
    string temp;

    for(int i=0;i<n;i++)
        {
            cin>>temp;
        for(int j=1;j<=temp.length();j++)
            {
            if(temp[j-1]==temp[j]){count++;}
        }
        cout<<count<<endl;
        count = 0;
    }
    return 0;
}
