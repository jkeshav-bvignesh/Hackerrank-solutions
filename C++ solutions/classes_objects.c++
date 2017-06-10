//https://www.hackerrank.com/challenges/classes-objects

#include<iostream>
using namespace std;

class Student{
    private:
    int marks[5];
    int grade;
    
    public:
    void input(){
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    
    int calculateTotalScore(){
        grade = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
        return grade;
    }
};

int main(){
    int n;
    cin>>n;
    Student *s = new Student[n];

    for(int i=0;i<n;i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0;
    for(int i = 1; i<n;i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout<<count;
    
    return 0;
}
}
