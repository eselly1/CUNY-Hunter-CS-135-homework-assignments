/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi 
Course: CSCI 135
Assignment: Lab 3B
Program: This program prints out the maximum
and minimum storage for the East basin in 2018
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
    double max=0;
    double min=100;
    while (fin >> date >> eastSt)
    {
        if (eastSt > max)
            max = eastSt;
        else if (eastSt < min)
            min = eastSt;
        fin.ignore(INT_MAX, '\n');
    }
    cout << "minimum storage in East basin: " << min << "billion gallons" << endl;
    cout << "MAXimum storage in East basin: " << max << "billion gallons" << endl;
    return 0;
}