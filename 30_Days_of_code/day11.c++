//https://www.hackerrank.com/challenges/30-2d-arrays/problem

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool sort_funct(int i,int j){return (i>j);}
int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int temp;
    vector <int> sum;
    for(int i=0;i<4;i++)
        {
        for(int j=0;j<4;j++)
            {
            temp=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            sum.push_back(temp);
        }
    }
    sort(sum.begin(),sum.end(),sort_funct);
    cout<<sum[0];
        
    
    return 0;
}

