#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string S;
    cin >> S;
    int s;
    try{
        s = stoi(S);
        cout<<s;
    }
    catch(const invalid_argument& ia){
        cout<<"Bad String";
    }
    return 0;
}
