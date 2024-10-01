/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Course: CSCI 135
Assignment: Lab 4D
Program: This program takes an input of
length and prints the bottom half of a square
*/

#include <iostream>
using namespace std;

int main(){
    int length;
    cout << "Input side length:" << endl;
    cin >> length;

    for (int i= 0; i<length; i++){
        for (int j= 0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}