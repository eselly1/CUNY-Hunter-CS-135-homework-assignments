/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi 
Course: CSCI 135
Assignment: Lab 3C
Program: This program compares the values for
East and West basins in a date range and prints 
the higher elevation of the two values
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string junk; // new string variable
    getline(fin, junk);
    string date;
    double eastSt;
    double eastEl; 
    double westSt;
    double westEl;
    string startDate;
    string endDate;
    cout << "Enter starting date: " << endl;
    cin >> startDate;
    cout << "Enter ending date: " << endl;
    cin >> endDate;
    while (fin >> date >> eastSt >> eastEl >> westSt >>  westEl)
    {
        if (date >= startDate && date <= endDate){
            if (eastEl == westEl)
                cout << date << " " << "Equal" << endl;
            else if (eastEl > westEl)
                cout << date << " " << "East" << endl;
            else
                cout << date << " " << "West" << endl;
        }
        
        fin.ignore(INT_MAX, '\n');
    }
  
    return 0;
}