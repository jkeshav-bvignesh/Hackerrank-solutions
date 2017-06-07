#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;
    int n = time.length()-2;
    int temp = stoi(time.substr(0,2));
    if(time[n]=='A')
        {
        if(temp==12){cout<<to_string(0)+to_string(0)+time.substr(2,6);}
        else{cout<<time.substr(0,n);}
        
    }
    else
        {
        if(temp==12){cout<<time.substr(0,n);}
        else{cout<<to_string(temp+12)+time.substr(2,6);}
        
    }
    return 0;
}

