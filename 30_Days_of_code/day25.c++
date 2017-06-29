#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,num,flag;
    cin>>n;
    while(n-->0){
        cin>>num;
        else if(num == 2||num == 3){
            cout<<"Prime"<<endl;
        }
        else if(num%2 == 0||num == 1){
            cout<<"Not prime"<<endl;
        }
        else{
            long long int sq = sqrt(num);
            flag = 0;
            for(long long int i = 3;i<=sq&&flag==0;i=i+2){
                if(num%i == 0){
                    flag = 1;
                }
            }
            if(flag == 0){
                cout<<"Prime"<<endl;
            }
            else if(flag == 1){
                cout<<"Not prime"<<endl;
            }
        }
    }
    return 0;
}

