/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Course: CSCI 135
Assignment: Homework E5.14
Program: This program sorts 2 numbers
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b)
{
    if (a > b)
    {
        int d = a;
        a = b;
        b = d;
    }
    
}
int main()
{
    int a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;

    sort2(a,b);

    return a,b;
}