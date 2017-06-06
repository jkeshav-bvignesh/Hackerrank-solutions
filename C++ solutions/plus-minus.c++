//https://www.hackerrank.com/challenges/plus-minus

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    float pos=0,neg=0;
    
    for(int arr_i = 0;arr_i < n;arr_i++){
        if(arr[arr_i]>0)pos++;
        else if(arr[arr_i]<0)neg++;
    }
    cout<<pos/n<<endl;
    cout<<neg/n<<endl;
    cout<<(n-(pos+neg))/n<<endl;
    return 0;
}
