/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Course: CSCI 135
Instructor:  Tong Yi
Assignment: Lab 5A
Program: This program defines a function isDivisibleBy
which returns true or false based on whether a
number is divisible by another number
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
    if (d == 0)
    {
        cout << "No" << endl;
        return false;
    }
    if (n % d == 0)
    {
        cout << "Yes" << endl;
        return true;
    }
    else
    {
        cout << "No" << endl;
        return false;
    }
}
int main()
{
    int n, d;
    cout << "Enter first number: " << endl;
    cin >> n;
    cout << "Enter second number: " << endl;
    cin >> d;

    isDivisibleBy(n, d);

    return 0;
}