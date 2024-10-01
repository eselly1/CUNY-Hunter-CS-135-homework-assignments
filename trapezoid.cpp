/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Date: Sept 2024
Instructor: Tong Yi
Course: CSCI 135
Assignment: Lab 4F
Program: This program takes an input of
width and height and prints an upside down trapezoid,
if within acceptable parameters
*/

#include <iostream>
using namespace std;

int main()
{
    int width, height, spaces, stars;
    cout << "Input width:" << endl;
    cin >> width;
    cout << "Input height:" << endl;
    cin >> height;

    stars = width;
    spaces = 0;

    int limit = 2 * (height);

    if (width % 2 == 0)
    {
        if ((width - limit) < 0)
        {
            cout << "Impossible shape!" << endl;
            return -1;
        }
    }
    else
    {
        if ((width - (2 * (height - 1)) < 0))
        {
            cout << "Impossible shape 2!" << endl;
            return -1;
        }
    }

    for (int i = 0; i < height; i++)
    {
        if (spaces >= 1)
        {
            for (int k = 0; k < spaces; k++)
            {
                cout << " ";
            }
            for (int j = 0; j < stars; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < stars; j++)
            {
                cout << "*";
            }
        }
        spaces++;
        stars -= 2;
        cout << endl;
    }
    return 0;
}
