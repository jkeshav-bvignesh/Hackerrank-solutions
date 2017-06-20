//https://www.hackerrank.com/challenges/30-dictionaries-and-maps

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map <string, long int> phonebook;
    map <string, long int>::iterator it;
    int n;
    cin>>n;
    string name;
    long int number;
    for(int i=0;i<n;i++){
        cin>>name>>number;
        phonebook.insert(pair<string,long int>(name,number));
    }
    string temp_name;
    while(cin>>name)
        {
            it = phonebook.find(name);
            if(it!=phonebook.end()){
                cout<<name<<"="<<it->second<<endl;
            }
            else{
                cout<<"Not found"<<endl;
            }
    }
    return 0;
}
