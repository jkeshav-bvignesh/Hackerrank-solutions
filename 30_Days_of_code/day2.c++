#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double meal_cost;
    double tip;
    double tax;
    cin>>meal_cost;
    cin>>tip;
    cin>>tax;
    int total_cost = int(meal_cost + ((meal_cost*tip)/100) + ((meal_cost*tax)/100)+0.5);
    //0.5 is added to aid in rounding up values. In C++ any number less than x is rounded to x-1.
    // That is 0.6 is rounded to 0 and not 1. In real life and number greater than 0.5 is rounded to the next highest number.
    cout<<"The total meal cost is "<<total_cost<<" dollars."<<endl;
    return 0;
}

