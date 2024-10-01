/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Course: CSCI 135
Assignment: Homework E3.5
Program: This program prints out whether
a sequence of numbers is increasing, decreasing, or neither
*/

#include <iostream>
using namespace std;

int main(){
    int num1,num2, num3;
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << "Enter second number:" << endl;
    cin >> num2;
    cout << "Enter third number:" << endl;
    cin >> num3;
    int total=0;
    int arr[3]={num1,num2,num3};

    for (int i=0; i<2;i++){
        if (arr[i] < arr[i+1])
            total++;
        else
            total--;
    }
    if (total == 2)
        cout << "Increasing" << endl;
    else if (total == -2)
        cout << "Decreasing" << endl;
    else    
        cout << "Neither" << endl;

    return 0;
}