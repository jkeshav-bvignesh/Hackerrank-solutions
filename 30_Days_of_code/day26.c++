#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int actual_day,actual_month,actual_year,ex_day,ex_month,ex_year;
    
    cin>>actual_day>>actual_month>>actual_year>>ex_day>>ex_month>>ex_year;
    if(actual_year>ex_year){
        cout<<"10000";
    }
    else if(actual_year == ex_year && actual_month>ex_month){
            cout<<500*(actual_month - ex_month);
        }
    else if(actual_year == ex_year && actual_month==ex_month && actual_day>ex_day){
                cout<<15*(actual_day-ex_day);
            }
        else{
            cout<<"0";
            }
                
    return 0;
}

