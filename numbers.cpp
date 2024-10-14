/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Course: CSCI 135
Instructor:  Tong Yi
Date: Oct 2024
Assignment: Lab 5B
Program: This program defines adds a function isPrime
which returns true or false based on whether a
number is a prime number
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

bool isPrime(int n)
{
    bool isPrime = true;
    if (n == 1 || n == 0 || n < 0)
    {
        isPrime = false;
        return isPrime;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (n % i == 0 && i > 1)
        {
            isPrime = false;
        }
    }

    return isPrime;
}
int main()
{
    int n, d;
    cout << "Enter a number: " << endl;
    cin >> n;

    isPrime(n);

    return 0;
}