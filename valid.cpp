/*
Author: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Date: Sept 2024
Assignment: Lad 2A
Instructor Tong Yi
Program: This program asks for a number between 0-100
and returns the square
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please enter an integer: " << endl;
    cin >> num;
    while (num <= 0 || num >= 100){
        cout << "Please re-enter: " << endl;
        cin >> num;
    }
    cout << "Number squared is " << num * num << endl;

    return 0;
}