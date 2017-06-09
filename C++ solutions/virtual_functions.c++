#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    virtual void getdata(){};
    virtual void putdata(){};
};

class Professor:public Person{
    public:
    int publications;
    int cur_id;
    static int count;
    
    Professor(){cur_id = ++count;}
    
    void getdata(){
        cin >> name >> age >> publications;
    }
    
    void putdata(){
        cout<<name <<" " << age <<" " << publications <<" " << cur_id<<endl;
    }
};

int Professor::count=0;

class Student :public Person{
    public:
    int cur_id;
    int marks[6];
    int total_marks;
    static int count;
    
    Student(){cur_id = ++count;}
    
    void getdata(){
        total_marks = 0;
        cin >> name >> age;
        for(int i=0;i<6;i++){
            cin>>marks[i];
            total_marks+=marks[i];
        }
    }
    
    void putdata(){
        cout<<name <<" " << age <<" " << total_marks <<" " << cur_id<<endl;
    }
};

int Student::count=0;

int main(){

    int n,val;
    cin>>n;
    Person *per[n];

    for(int i=0;i<n;i++){
        cin>>val;
        if(val == 1){
            per[i] = new Professor;
        }
        else per[i] = new Student;
        per[i]->getdata();
    }

    for(int i=0;i<n;i++)
        per[i]->putdata();
 
    return 0;

}
