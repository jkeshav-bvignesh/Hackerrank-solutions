#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k,temp,max;
    cin>>n>>k;
    max = k;
    for(int i=0;i<n;i++)
        {
        cin>>temp;
        if(temp>max){max = temp;} 
    }
    if(max>k){cout<<max-k;}
    else{cout<<0;}
    return 0;
}

