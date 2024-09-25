/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Course: CSCI 135
Assignment: Lab 3D
Program: This program prints the West basin elevation
in a given range of dates in reverse order
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
    int arrSize;
    double elArr[5];
    cout << "Enter starting date: " << endl;
    cin >> startDate;
    cout << "Enter ending date: " << endl;
    cin >> endDate;

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        if (date >= startDate && date <= endDate)
        {
            elArr[] = westEl;
            cout << "populating elarr" << endl;
        }
    }

    fin.ignore(INT_MAX, '\n');
}
fin.close();
for (int i = 0; i < 5; i++)
{
    cout << elArr[i] << endl;
}

while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
{

    if (date >= startDate && date <= endDate)
    {
        for (int i = 0; i < arrSize; i++)
        {
            elArr[i] = westEl;
            cout << "populating elarr" << endl;
        }
    }
    fin.ignore(INT_MAX, '\n');
}

while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
{
    for (int i = arrSize - 1; i >= 0; i -= 1)
    {
        if (date >= startDate && date <= endDate)
        {
            cout << date << elArr[i];
        }
    }
    fin.ignore(INT_MAX, '\n');
}

return 0;
}

