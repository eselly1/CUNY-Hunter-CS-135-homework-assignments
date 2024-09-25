/*
Author: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Assignment: Lab 2D
Program: Calculates and prints numbers in the
Fibonacci sequence up to the 60th value
*/

#include <iostream>
using namespace std;

int main()
{
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2]; // the numbers start to diverge from what we
                                          // would expect because of the size limit of
                                          // the int data type
    }
    for (int i = 0; i < 60; i++)
    {
        cout << fib[i] << endl;
    }
    return 0;
}