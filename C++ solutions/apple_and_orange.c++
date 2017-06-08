#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int point_a;
    int point_b;
    int count=0;
    for(int i=0;i<m;i++)
        {   
            cin>>point_a;
            int temp = a+point_a;
            if(temp>=s&&temp<=t){count++;}
    }
    cout<<count<<endl;
    count = 0;
     for(int i=0;i<n;i++)
        {
         cin>>point_b;
         int temp = b+point_b;
        if(temp>=s&&temp<=t){count++;}
    }
    cout<<count<<endl;
    return 0;
}

