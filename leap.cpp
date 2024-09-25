/*
Author: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Course: CSCI 135
Instructor: Tong Yee
Date: Sept 2024
Assignment: smaller of the three numbers
Lab 1B
*/
#include <iostream> 
using namespace std;

int main (){
    cout << "Enter year: ";
    int year;
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0)
            if (year % 400 == 0)
                cout << "Leap year";
            else
                cout << "Common year";
        else 
            cout << "Leap year";
    }
    else
        cout << "Common year";
    
    return 0;
}