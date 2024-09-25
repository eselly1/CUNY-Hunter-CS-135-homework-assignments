// 
// Name: Eselly Lopez Luna
// Email: eselly.lopezluna11@myhunter.cuny.edu
// Instructor: Tong Yi
// Course: CSCI 135
// Assignment: Project 1A
// Program: This program converts a time given in 24-hour 
// format string to a 12-hour format integer. It
// returns invalid input if time is outside allowed parameters
// 


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int times[24]={12,1,2,3,4,5,6,7,8,9,10,11,12,1,2,3,4,5,6,7,8,9,10,11};
    string time;
    cin >> time;
    string hour= time.substr(0,2);
    int hh = stoi(hour);
    int comma = time.find(":");
    string min= time.substr(comma + 1);
    int mm = stoi(min);
    if (hh < 0 || hh > 23 || mm < 0 || mm > 59){
        cout << "Invalid input" << endl;
        return -1;
    }
    if (hh <=11){
        cout << times[hh] << ":" << mm << " AM" << endl;
    }
    else{
        cout << times[hh] << ":" << mm << " PM" << endl;
    }
    return 0;
}