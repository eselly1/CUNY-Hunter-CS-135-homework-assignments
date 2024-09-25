/*

Author: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Course: CSCI 135
Instructor: Tong Yee
Date: Sept 2024
Assignment: smaller of the three numbers
Lab 1B
*/
#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    cout << "enter first number:" << endl;
    cin >> num1;
    cout << "enter second number:" << endl;
    cin >> num2;
    cout << "enter third number:" << endl;
    cin >> num3;
    if (num1 < num2)
    {
        if (num1 < num3)
            cout << "The smaller of the three is " << num1;
        else
            cout << "The smaller of the three is " << num3;
    }
    else
    {
        if (num2 < num3)
            cout << "The smaller of the three is " << num2;
        else
            cout << "The smaller of the three is " << num3;
    }
    return 0;
}
