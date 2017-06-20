//https://www.hackerrank.com/challenges/30-binary-numbers/problem

#include <cmath>
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int max = 0,flag = 0,rem,count = 0;
    while(n>0){
        rem = n%2;
        if(rem == 0 && flag == 1){
            if(max<count){max = count;}
            flag = 0;
        }
        else if(rem == 1 && flag == 0){
            flag = 1;
            count = 1;
        }
        else if(rem == 1 && flag == 1){
            count+=1;
        }
        n = n/2;
    }
    if(max<count){max = count;}
    cout<<max;
    return 0;
}

