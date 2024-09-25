/*
Author: Eselly Lopez Luna
Date: Sept 2024
Course: CSCI 135
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Assignment: Lab 1D
Program: Prints out number of days 
in a given month and year
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    int month;
    cout << "enter year: " << endl;
    cin >> year;
    cout << "enter month: " << endl;
    cin >> month;

    if (month <= 6)
    {
        if (month == 2)
        {
            if (year % 4 == 0)
            {
                if (year % 100 == 0)
                    if (year % 400 == 0)
                        cout << "29 days";
                    else
                        cout << "28 days";
                else
                    cout << "29 days";
            }
            else
                cout << "28 days";
        }
        else if (month % 2 != 0)
            cout << "31 days";
        else
            cout << "30 days";
    }
    else 
        if (month % 2 == 0)
            cout << "31 days";
        else
            if (month == 7)
                cout << "31 days";
            else
                cout << "30 days";
    return 0;
    }