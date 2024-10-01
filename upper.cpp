/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Course: CSCI 135
Assignment: Lab 4E
Program: This program takes an input of
length and prints the bottom half of a square
*/

#include <iostream>
using namespace std;

int main()
{
    int length;
    int space = 0;
    cout << "Input side length:" << endl;
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        for (int k=0;k<space;k++){
            cout << " ";
        }

        for (int j = length-space; j > 0; j--)
        {
            cout << "*";
            }
        space++;
        cout << endl;
    }


    return 0;
}