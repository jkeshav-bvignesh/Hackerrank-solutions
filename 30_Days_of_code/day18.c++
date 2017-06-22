#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Solution {
    stack<char> Stack;
    queue<char> Queue;
    public:
    void pushCharacter(char s){
        Stack.push(s);
    }
    char popCharacter(){
        char a = Stack.top();
        Stack.pop();
        return a;
    }
    
    void enqueueCharacter(char s){
        Queue.push(s);
    }
    
    char dequeueCharacter(){
        char a = Queue.front();
        Queue.pop();
        return a;
    }
};


int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
