/* 
Name: Eselly Lopez Luna
Instructor: Tong Yi
Course: CSCI 135
Assignment: Lab 3A
Program: This program prints out East Basin 
storage when given a date 
by user
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
    string userDate;
    cout << "Enter date: " << endl;
    cin >> userDate;
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        if (date == userDate){
            cout << eastSt << "billion gallons" << endl;

        }
        fin.ignore(INT_MAX, '\n');
    }
    
    

}