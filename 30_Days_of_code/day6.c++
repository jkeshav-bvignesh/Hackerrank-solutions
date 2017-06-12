#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    string temp,even,odd;
    while(n--){
        cin>>temp;
        even = temp[0];
        odd = temp[1];
        for(int i=2;i<temp.size();i++)
            {
            if(i%2 == 0){
                even+=temp[i];
            }
            else{
                odd+=temp[i];
            }
        }
        cout<<even<<" "<<odd<<endl;
    }
    return 0;
}

