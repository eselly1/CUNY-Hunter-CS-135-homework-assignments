/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Course: CSCI 135
Assignment: Homework E3.1
Program: This program prints out whether
a number is positive, negative or zero
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter number: "<< endl;
    cin >> num;
    if(num < 0)
        cout << "Negative" << endl;
    else if (num > 0)
        cout << "Positive" << endl;
    else if (num == 0)
        cout << "Zero" << endl;
    return 0;
}