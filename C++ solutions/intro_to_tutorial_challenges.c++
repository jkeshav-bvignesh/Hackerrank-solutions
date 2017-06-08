//https://www.hackerrank.com/challenges/tutorial-intro
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int v,n,array_element;
    cin>>v>>n;
    for(int i=0;i<n;i++)
        {
        cin>>array_element;
        if(v==array_element){cout<<i;}
    }
    return 0;
}

