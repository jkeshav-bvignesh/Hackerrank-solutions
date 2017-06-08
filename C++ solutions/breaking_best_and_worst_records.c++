#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int min,max,temp,max_count=0,min_count=0;
    cin>>temp;
    min=max=temp;
    for(int i=1;i<n;i++)
        {
        cin>>temp;
        if(temp>max)
	{
		max=temp;
		max_count++;
	}
        else if(temp<min)
	{
		min=temp;
		min_count++;
	}
    }
    cout<<max_count<<" "<<min_count;
    return 0;
}

