#include <vector>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        if(arr[i]>=38){
        int k = arr[i]%5;
            if(k==3|k==4){
                arr[i]=arr[i]+(5-k);}
      }
        cout<<arr[i]<<endl;
    }
    
    return 0;
}

