#include <vector>
#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    int max = 0;
    int count = 0;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
       if(height[height_i] > max){
          max=height[height_i];
          count = 1;  
        }
       else if(height[height_i] == max){
            count++;
        }
    }
    cout<<count;
    return 0;
}
