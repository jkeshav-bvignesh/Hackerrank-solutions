#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    vector<unsigned long long> arr(5);
    unsigned long long sum = 0;
    unsigned long long max,min;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
        sum = sum + arr[arr_i];
        }
    
    
    max = *max_element(arr.begin(),arr.end());
    min = *min_element(arr.begin(),arr.end());
    cout<<sum-max<<" "<<sum-min;
    return 0;
}

