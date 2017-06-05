//https://www.hackerrank.com/challenges/beautiful-binary-string/

#include <bits/stdc++.h>
using namespace std;

int minSteps(int n, string B){
    // Complete this function
    int count = 0;
    char o = '0';
    char l = '1';
    for(int i=0;i<n-2;i++)
        {
        if(B[i]==o&&B[i+1]==l&&B[i+2]==o)
            {
            B[i+2]=l;
            count++;
        }
    }
        return count;
}

int main() {
    int n;
    cin >> n;
    string B;
    cin >> B;
    int result = minSteps(n, B);
    cout << result << endl;
    return 0;
}

